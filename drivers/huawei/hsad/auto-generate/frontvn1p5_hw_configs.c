/*The file is auto generated by tools, don't modify it manully.*/
#include <hsad/config_data.h>
#include <hsad/config_general_struct.h>
config_pair  frontvn1p5_hw_configs_common [] = {
    {"audio/audience_type", (const unsigned int)(unsigned int*)"uart", E_CONFIG_DATA_TYPE_STRING }, 
    {"audio/enhance_type", (const unsigned int)(unsigned int*)"dts", E_CONFIG_DATA_TYPE_STRING }, 
    {"audio/vibrator_driver", (const unsigned int)(unsigned int*)"AUX3", E_CONFIG_DATA_TYPE_STRING }, 
    {"gas_gauge/capacity", (unsigned int)1670, E_CONFIG_DATA_TYPE_INT }, 
    {"gas_gauge/charge_current", (unsigned int)1000, E_CONFIG_DATA_TYPE_INT }, 
    {"gas_gauge/charge_voltage", (unsigned int)4200, E_CONFIG_DATA_TYPE_INT }, 
    {"gas_gauge/firmware_name", (const unsigned int)(unsigned int*)"BQ27510_GUANGYU_1670", E_CONFIG_DATA_TYPE_STRING }, 
    {"gas_gauge/version", (unsigned int)0x14400a4, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/id0", (const unsigned int)(unsigned int*)"LCD_R61529_TRULY_HVGA", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/id1", (const unsigned int)(unsigned int*)"LCD_MDDI_NT35582_BYD_WVGA", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/name", (const unsigned int)(unsigned int*)"mdv20", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/number", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/sample/sub_sample1", (const unsigned int)(unsigned int*)"HVGA", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/sample/sub_sample2", (unsigned int)1, E_CONFIG_DATA_TYPE_BOOL }, 
    {"lcd/sample/sub_sample3", (unsigned int)80, E_CONFIG_DATA_TYPE_INT }, 
    {"leds/leds_type", (const unsigned int)(unsigned int*)"tca6507", E_CONFIG_DATA_TYPE_STRING }, 
    {"mhl/ci2ca_is_pull_up", (unsigned int)1, E_CONFIG_DATA_TYPE_BOOL }, 
    {"mhl/mhl_connect", (unsigned int)0, E_CONFIG_DATA_TYPE_BOOL }, 
    {"pm/current_limt", (const unsigned int)(unsigned int*)"LIMIT_700MA", E_CONFIG_DATA_TYPE_STRING }, 
    {"proximity/threshold", (unsigned int)0x1, E_CONFIG_DATA_TYPE_INT }, 
    {"sdcard/sw_fc", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"sysen/board_value", (unsigned int)0x01, E_CONFIG_DATA_TYPE_INT }, 
    {"test_version/if_test_version", (const unsigned int)(unsigned int*)"true", E_CONFIG_DATA_TYPE_STRING }, 
    {"tklight/touchkeylight", (unsigned int)1, E_CONFIG_DATA_TYPE_BOOL }, 
    {"touchscreen/front", (unsigned int)0, E_CONFIG_DATA_TYPE_BOOL }, 
    {"touchscreen/size", (const unsigned int)(unsigned int*)"720P", E_CONFIG_DATA_TYPE_STRING }, 
    {"usbeye/trim_value", (unsigned int)0x37, E_CONFIG_DATA_TYPE_INT }, 
    {"xmd/xmd_ready_gpio_enable", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {0, 0, 0}
 };
struct board_id_general_struct frontvn1p5_hw_configs= {
	.name=COMMON_MODULE_NAME,
	.board_id=BOARD_ID_FRONTVN1P5,
	.data_array={.config_pair_ptr=frontvn1p5_hw_configs_common},
	.list={NULL,NULL},
};
