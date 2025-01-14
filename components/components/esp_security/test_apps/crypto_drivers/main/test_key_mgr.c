/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */
#include <string.h>
#include "unity.h"

#include "soc/soc_caps.h"
#include "esp_partition.h"
#include "esp_flash.h"
#include "esp_log.h"
#include "esp_err.h"
#if CONFIG_IDF_TARGET_ESP32P4
#include "esp32p4/rom/efuse.h"
#endif
#include "soc/keymng_reg.h"
#include "esp_key_mgr.h"
#include "esp_system.h"
#include "unity_test_utils_memory.h"
static const char *TAG = "key_mgr_test";

#define ENCRYPTED_DATA_SIZE 128
static const uint8_t plaintext_data[ENCRYPTED_DATA_SIZE] = {
    0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
    0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20,
    0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30,
    0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40,
    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50,
    0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60,
    0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70,
    0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80,
};

static const uint8_t expected_ciphertext[ENCRYPTED_DATA_SIZE] = {
    0x1f, 0x41, 0xa4, 0xec, 0x0f, 0xd3, 0xaf, 0xe1, 0xb5, 0xc0, 0x56, 0x41, 0xcb, 0x28, 0x97, 0x1c,
    0x45, 0x02, 0x23, 0xcd, 0x45, 0x06, 0x19, 0xd8, 0xf9, 0x40, 0x8d, 0xdf, 0xb8, 0x71, 0xa7, 0x79,
    0xdf, 0xbb, 0x2d, 0x6a, 0xdd, 0x16, 0x18, 0x32, 0xe4, 0xa6, 0xfe, 0x23, 0xc9, 0x70, 0xa0, 0xfa,
    0xec, 0x74, 0xf4, 0x62, 0xea, 0x31, 0xc7, 0x1e, 0xfe, 0x94, 0xda, 0xe1, 0x70, 0xf8, 0x9f, 0xa3,
    0x03, 0xdf, 0x89, 0x77, 0x0a, 0x41, 0x7d, 0xc5, 0xe6, 0xc8, 0xb1, 0x10, 0xc8, 0x12, 0xa6, 0x3f,
    0xea, 0xf0, 0xfa, 0x7a, 0x5d, 0x33, 0xb3, 0xe6, 0xc2, 0x27, 0x07, 0x1e, 0x71, 0x22, 0x87, 0x73,
    0xc4, 0x2a, 0xbd, 0x59, 0x8f, 0xc6, 0xfb, 0x28, 0x2e, 0xec, 0xa2, 0x1f, 0x42, 0x7c, 0x54, 0xec,
    0x1e, 0x0f, 0x9f, 0xf2, 0x6e, 0x3f, 0xb8, 0x7d, 0xbf, 0xee, 0xf9, 0x7c, 0x93, 0xb2, 0x79, 0x98
};

/* Big endian */
uint8_t init_key[] = {
    0x4d, 0x21, 0x64, 0x21, 0x8f, 0xa2, 0xe3, 0xa0, 0xab, 0x74, 0xb5, 0xab, 0x17, 0x9a, 0x5d, 0x08,
    0x58, 0xf4, 0x22, 0x03, 0xbd, 0x52, 0xe7, 0x88, 0x3c, 0x22, 0x0f, 0x95, 0x89, 0x70, 0xe1, 0x93
};

/* Big endian */
uint8_t k2_info[] = {
    0xd8, 0xcd, 0x04, 0x45, 0xb4, 0x45, 0xc4, 0x15, 0xf6, 0x40, 0x1c, 0x7d, 0x90, 0x1b, 0x99, 0xa4,
    0x79, 0x6b, 0xfb, 0x5b, 0x2a, 0x40, 0x60, 0xe1, 0xc1, 0xe1, 0x48, 0xcd, 0x46, 0x6b, 0x9b, 0x48,
    0xda, 0x7a, 0x70, 0x0a, 0x78, 0x0b, 0x9d, 0xf9, 0x0e, 0xed, 0x91, 0xfc, 0xa5, 0xc2, 0x96, 0x05,
    0x91, 0x76, 0xdb, 0x68, 0x84, 0x5d, 0x5e, 0x5b, 0xa6, 0xe9, 0x6b, 0x3b, 0x12, 0x50, 0x05, 0xc3
};

/* Big endian */
uint8_t k1_ecdsa_encrypt[] = {
    0xeb, 0x83, 0x24, 0x7d, 0xf8, 0x40, 0xc9, 0x88, 0x5f, 0x5e, 0x58, 0x57, 0x25, 0xa9, 0x23, 0x4a,
    0xa4, 0xc4, 0x12, 0x17, 0xf3, 0x9e, 0x1f, 0xa0, 0xa0, 0xfa, 0xd5, 0xbf, 0xb6, 0x6c, 0xb5, 0x48
};

uint8_t k1_xts_encrypt[] = {
    0xeb, 0x83, 0x24, 0x7d, 0xf8, 0x40, 0xc9, 0x88, 0x5f, 0x5e, 0x58, 0x57, 0x25, 0xa9, 0x23, 0x4a,
    0xa4, 0xc4, 0x12, 0x17, 0xf3, 0x9e, 0x1f, 0xa0, 0xa0, 0xfa, 0xd5, 0xbf, 0xb6, 0x6c, 0xb5, 0x48
};

const esp_partition_t *get_test_storage_partition(void)
{
    /* This finds "storage" partition defined partition table */
    const esp_partition_t *result = esp_partition_find_first(ESP_PARTITION_TYPE_DATA,
                                                             ESP_PARTITION_SUBTYPE_ANY, "storage");
    if (!result) {
        /* means partition table set wrong */
        ESP_LOGE(TAG, "ERROR in obtaining storage partition");
        return NULL;
    }
    return result;
}

static esp_err_t test_xts_aes_key(void)
{
    const esp_partition_t *partition = get_test_storage_partition();
    ESP_ERROR_CHECK(esp_partition_erase_range(partition, 0, partition->size));

    uint32_t address = partition->address;
    ESP_ERROR_CHECK(esp_flash_write_encrypted(NULL, address, plaintext_data, sizeof(plaintext_data)));
    uint8_t read_data[ENCRYPTED_DATA_SIZE];
    ESP_ERROR_CHECK(esp_flash_read(NULL, read_data, address, sizeof(read_data)));
    if (memcmp(read_data, expected_ciphertext, sizeof(expected_ciphertext)) != 0) {
        ESP_LOGE(TAG, "Encrypted data does not match expected data");
        return ESP_FAIL;
    }
    return ESP_OK;
}

extern void set_leak_threshold(int threshold);
TEST_CASE("Key Manager AES mode: XTS-AES key deployment", "[hw_crypto] [key_mgr]")
{
    static esp_key_mgr_aes_key_config_t key_config;
    memcpy(key_config.k2_info, (uint8_t*) k2_info, KEY_MGR_K2_INFO_SIZE);
    memcpy(key_config.k1_encrypted, (uint8_t*) k1_xts_encrypt, KEY_MGR_K1_ENCRYPTED_SIZE);
    memcpy(key_config.sw_init_key, (uint8_t*) init_key, KEY_MGR_SW_INIT_KEY_SIZE);
    key_config.use_pre_generated_sw_init_key = 1;
    key_config.key_type = ESP_KEY_MGR_XTS_AES_128_KEY;

    static esp_key_mgr_key_recovery_info_t key_info;
    esp_err_t esp_ret = ESP_FAIL;
    esp_ret = esp_key_mgr_deploy_key_in_aes_mode(&key_config, &key_info);
    TEST_ASSERT_EQUAL(ESP_OK, esp_ret);
    esp_ret = esp_key_mgr_activate_key(&key_info);
    TEST_ASSERT_EQUAL(ESP_OK, esp_ret);
    esp_ret = test_xts_aes_key();
    TEST_ASSERT_EQUAL(ESP_OK, esp_ret);
    esp_ret = esp_key_mgr_deactivate_key(key_info.key_type);
    TEST_ASSERT_EQUAL(ESP_OK, esp_ret);
}

TEST_CASE("Key Manager random mode: XTS_AES_128 key deployment", "[hw_crypto] [key_mgr]")
{
    ESP_LOGI(TAG, "Key Manager Example Start");
    static esp_key_mgr_random_key_config_t key_config;

    key_config.key_type = ESP_KEY_MGR_XTS_AES_128_KEY;

    static esp_key_mgr_key_recovery_info_t key_info;
    esp_err_t esp_ret = ESP_FAIL;
    esp_ret = esp_key_mgr_deploy_key_in_random_mode(&key_config, &key_info);
    TEST_ASSERT_EQUAL(ESP_OK, esp_ret);

}

TEST_CASE("Key Manager random mode: ECDSA key deployment", "[hw_crypto] [key_mgr]")
{
    static esp_key_mgr_random_key_config_t key_config;
    static esp_key_mgr_key_recovery_info_t key_info;
    esp_err_t esp_ret = ESP_FAIL;
    key_config.key_type = ESP_KEY_MGR_ECDSA_KEY;
    esp_ret = esp_key_mgr_deploy_key_in_random_mode(&key_config, &key_info);
    TEST_ASSERT_EQUAL(ESP_OK, esp_ret);
}
