#include "global.h"
#include "obd_error_codes.h"
// was generated automatically by rusEFI tool  from obd_error_codes.h // by enum2string.jar tool on Mon Apr 04 21:45:53 UTC 2022
// see also gen_config_and_enums.bat



const char *getObd_code_e(obd_code_e value){
switch(value) {
case CUSTOM_6005:
  return "CUSTOM_6005";
case CUSTOM_6006:
  return "CUSTOM_6006";
case CUSTOM_6007:
  return "CUSTOM_6007";
case CUSTOM_6008:
  return "CUSTOM_6008";
case CUSTOM_6009:
  return "CUSTOM_6009";
case CUSTOM_6010:
  return "CUSTOM_6010";
case CUSTOM_6011:
  return "CUSTOM_6011";
case CUSTOM_6037:
  return "CUSTOM_6037";
case CUSTOM_6043:
  return "CUSTOM_6043";
case CUSTOM_6051:
  return "CUSTOM_6051";
case CUSTOM_6503:
  return "CUSTOM_6503";
case CUSTOM_ADD_BASE:
  return "CUSTOM_ADD_BASE";
case CUSTOM_ADVANCE_SPARK:
  return "CUSTOM_ADVANCE_SPARK";
case CUSTOM_ANGLE_NAN:
  return "CUSTOM_ANGLE_NAN";
case CUSTOM_APPEND_NULL:
  return "CUSTOM_APPEND_NULL";
case CUSTOM_APPEND_STACK:
  return "CUSTOM_APPEND_STACK";
case CUSTOM_APPLY_STACK:
  return "CUSTOM_APPLY_STACK";
case CUSTOM_ARTIFICIAL_MISFIRE:
  return "CUSTOM_ARTIFICIAL_MISFIRE";
case CUSTOM_AUX_OUT_OF_ORDER:
  return "CUSTOM_AUX_OUT_OF_ORDER";
case CUSTOM_CJ125_0:
  return "CUSTOM_CJ125_0";
case CUSTOM_CJ125_1:
  return "CUSTOM_CJ125_1";
case CUSTOM_CJ125_2:
  return "CUSTOM_CJ125_2";
case CUSTOM_CONFIG_NOT_READY:
  return "CUSTOM_CONFIG_NOT_READY";
case CUSTOM_CONF_NULL:
  return "CUSTOM_CONF_NULL";
case CUSTOM_CONSOLE_TOO_MANY:
  return "CUSTOM_CONSOLE_TOO_MANY";
case CUSTOM_DELTA_NOT_POSITIVE:
  return "CUSTOM_DELTA_NOT_POSITIVE";
case CUSTOM_DUTY_INVALID:
  return "CUSTOM_DUTY_INVALID";
case CUSTOM_DUTY_TOO_LOW:
  return "CUSTOM_DUTY_TOO_LOW";
case CUSTOM_DWELL:
  return "CUSTOM_DWELL";
case CUSTOM_DWELL_TOO_LONG:
  return "CUSTOM_DWELL_TOO_LONG";
case CUSTOM_EC_NULL:
  return "CUSTOM_EC_NULL";
case CUSTOM_EGO_TYPE:
  return "CUSTOM_EGO_TYPE";
case CUSTOM_ERROR_ICU:
  return "CUSTOM_ERROR_ICU";
case CUSTOM_ERR_2ND_WATCHDOG:
  return "CUSTOM_ERR_2ND_WATCHDOG";
case CUSTOM_ERR_6030:
  return "CUSTOM_ERR_6030";
case CUSTOM_ERR_6102:
  return "CUSTOM_ERR_6102";
case CUSTOM_ERR_6122:
  return "CUSTOM_ERR_6122";
case CUSTOM_ERR_6123:
  return "CUSTOM_ERR_6123";
case CUSTOM_ERR_6124:
  return "CUSTOM_ERR_6124";
case CUSTOM_ERR_6125:
  return "CUSTOM_ERR_6125";
case CUSTOM_ERR_6126:
  return "CUSTOM_ERR_6126";
case CUSTOM_ERR_6127:
  return "CUSTOM_ERR_6127";
case CUSTOM_ERR_6128:
  return "CUSTOM_ERR_6128";
case CUSTOM_ERR_6129:
  return "CUSTOM_ERR_6129";
case CUSTOM_ERR_6131:
  return "CUSTOM_ERR_6131";
case CUSTOM_ERR_6527:
  return "CUSTOM_ERR_6527";
case CUSTOM_ERR_6544:
  return "CUSTOM_ERR_6544";
case CUSTOM_ERR_6545:
  return "CUSTOM_ERR_6545";
case CUSTOM_ERR_6549:
  return "CUSTOM_ERR_6549";
case CUSTOM_ERR_6550:
  return "CUSTOM_ERR_6550";
case CUSTOM_ERR_6553:
  return "CUSTOM_ERR_6553";
case CUSTOM_ERR_6554:
  return "CUSTOM_ERR_6554";
case CUSTOM_ERR_6555:
  return "CUSTOM_ERR_6555";
case CUSTOM_ERR_6556:
  return "CUSTOM_ERR_6556";
case CUSTOM_ERR_6557:
  return "CUSTOM_ERR_6557";
case CUSTOM_ERR_6558:
  return "CUSTOM_ERR_6558";
case CUSTOM_ERR_6561:
  return "CUSTOM_ERR_6561";
case CUSTOM_ERR_6562:
  return "CUSTOM_ERR_6562";
case CUSTOM_ERR_6563:
  return "CUSTOM_ERR_6563";
case CUSTOM_ERR_6564:
  return "CUSTOM_ERR_6564";
case CUSTOM_ERR_6565:
  return "CUSTOM_ERR_6565";
case CUSTOM_ERR_6566:
  return "CUSTOM_ERR_6566";
case CUSTOM_ERR_6567:
  return "CUSTOM_ERR_6567";
case CUSTOM_ERR_6568:
  return "CUSTOM_ERR_6568";
case CUSTOM_ERR_6569:
  return "CUSTOM_ERR_6569";
case CUSTOM_ERR_6570:
  return "CUSTOM_ERR_6570";
case CUSTOM_ERR_6571:
  return "CUSTOM_ERR_6571";
case CUSTOM_ERR_6573:
  return "CUSTOM_ERR_6573";
case CUSTOM_ERR_6574:
  return "CUSTOM_ERR_6574";
case CUSTOM_ERR_6575:
  return "CUSTOM_ERR_6575";
case CUSTOM_ERR_6576:
  return "CUSTOM_ERR_6576";
case CUSTOM_ERR_6577:
  return "CUSTOM_ERR_6577";
case CUSTOM_ERR_6580:
  return "CUSTOM_ERR_6580";
case CUSTOM_ERR_6581:
  return "CUSTOM_ERR_6581";
case CUSTOM_ERR_6582:
  return "CUSTOM_ERR_6582";
case CUSTOM_ERR_6583:
  return "CUSTOM_ERR_6583";
case CUSTOM_ERR_6584:
  return "CUSTOM_ERR_6584";
case CUSTOM_ERR_6585:
  return "CUSTOM_ERR_6585";
case CUSTOM_ERR_6586:
  return "CUSTOM_ERR_6586";
case CUSTOM_ERR_6587:
  return "CUSTOM_ERR_6587";
case CUSTOM_ERR_6590:
  return "CUSTOM_ERR_6590";
case CUSTOM_ERR_6591:
  return "CUSTOM_ERR_6591";
case CUSTOM_ERR_6592:
  return "CUSTOM_ERR_6592";
case CUSTOM_ERR_6593:
  return "CUSTOM_ERR_6593";
case CUSTOM_ERR_6598:
  return "CUSTOM_ERR_6598";
case CUSTOM_ERR_6599:
  return "CUSTOM_ERR_6599";
case CUSTOM_ERR_6600:
  return "CUSTOM_ERR_6600";
case CUSTOM_ERR_6603:
  return "CUSTOM_ERR_6603";
case CUSTOM_ERR_6604:
  return "CUSTOM_ERR_6604";
case CUSTOM_ERR_6605:
  return "CUSTOM_ERR_6605";
case CUSTOM_ERR_6606:
  return "CUSTOM_ERR_6606";
case CUSTOM_ERR_6610:
  return "CUSTOM_ERR_6610";
case CUSTOM_ERR_6611:
  return "CUSTOM_ERR_6611";
case CUSTOM_ERR_6612:
  return "CUSTOM_ERR_6612";
case CUSTOM_ERR_6613:
  return "CUSTOM_ERR_6613";
case CUSTOM_ERR_6614:
  return "CUSTOM_ERR_6614";
case CUSTOM_ERR_6615:
  return "CUSTOM_ERR_6615";
case CUSTOM_ERR_6616:
  return "CUSTOM_ERR_6616";
case CUSTOM_ERR_6618:
  return "CUSTOM_ERR_6618";
case CUSTOM_ERR_6619:
  return "CUSTOM_ERR_6619";
case CUSTOM_ERR_6621:
  return "CUSTOM_ERR_6621";
case CUSTOM_ERR_6622:
  return "CUSTOM_ERR_6622";
case CUSTOM_ERR_6623:
  return "CUSTOM_ERR_6623";
case CUSTOM_ERR_6624:
  return "CUSTOM_ERR_6624";
case CUSTOM_ERR_6625:
  return "CUSTOM_ERR_6625";
case CUSTOM_ERR_6628:
  return "CUSTOM_ERR_6628";
case CUSTOM_ERR_6631:
  return "CUSTOM_ERR_6631";
case CUSTOM_ERR_6632:
  return "CUSTOM_ERR_6632";
case CUSTOM_ERR_6634:
  return "CUSTOM_ERR_6634";
case CUSTOM_ERR_6635:
  return "CUSTOM_ERR_6635";
case CUSTOM_ERR_6636:
  return "CUSTOM_ERR_6636";
case CUSTOM_ERR_6639:
  return "CUSTOM_ERR_6639";
case CUSTOM_ERR_6641:
  return "CUSTOM_ERR_6641";
case CUSTOM_ERR_6643:
  return "CUSTOM_ERR_6643";
case CUSTOM_ERR_6645:
  return "CUSTOM_ERR_6645";
case CUSTOM_ERR_6646:
  return "CUSTOM_ERR_6646";
case CUSTOM_ERR_6647:
  return "CUSTOM_ERR_6647";
case CUSTOM_ERR_6648:
  return "CUSTOM_ERR_6648";
case CUSTOM_ERR_6649:
  return "CUSTOM_ERR_6649";
case CUSTOM_ERR_6650:
  return "CUSTOM_ERR_6650";
case CUSTOM_ERR_6651:
  return "CUSTOM_ERR_6651";
case CUSTOM_ERR_6652:
  return "CUSTOM_ERR_6652";
case CUSTOM_ERR_6653:
  return "CUSTOM_ERR_6653";
case CUSTOM_ERR_6654:
  return "CUSTOM_ERR_6654";
case CUSTOM_ERR_6655:
  return "CUSTOM_ERR_6655";
case CUSTOM_ERR_6656:
  return "CUSTOM_ERR_6656";
case CUSTOM_ERR_6657:
  return "CUSTOM_ERR_6657";
case CUSTOM_ERR_6658:
  return "CUSTOM_ERR_6658";
case CUSTOM_ERR_6659:
  return "CUSTOM_ERR_6659";
case CUSTOM_ERR_6660:
  return "CUSTOM_ERR_6660";
case CUSTOM_ERR_6661:
  return "CUSTOM_ERR_6661";
case CUSTOM_ERR_6662:
  return "CUSTOM_ERR_6662";
case CUSTOM_ERR_6663:
  return "CUSTOM_ERR_6663";
case CUSTOM_ERR_6664:
  return "CUSTOM_ERR_6664";
case CUSTOM_ERR_6665:
  return "CUSTOM_ERR_6665";
case CUSTOM_ERR_6666:
  return "CUSTOM_ERR_6666";
case CUSTOM_ERR_6669:
  return "CUSTOM_ERR_6669";
case CUSTOM_ERR_6670:
  return "CUSTOM_ERR_6670";
case CUSTOM_ERR_6684:
  return "CUSTOM_ERR_6684";
case CUSTOM_ERR_6685:
  return "CUSTOM_ERR_6685";
case CUSTOM_ERR_6686:
  return "CUSTOM_ERR_6686";
case CUSTOM_ERR_6709:
  return "CUSTOM_ERR_6709";
case CUSTOM_ERR_6728:
  return "CUSTOM_ERR_6728";
case CUSTOM_ERR_ADCANCE_CALC_ANGLE:
  return "CUSTOM_ERR_ADCANCE_CALC_ANGLE";
case CUSTOM_ERR_ADC_CHANNEL:
  return "CUSTOM_ERR_ADC_CHANNEL";
case CUSTOM_ERR_ADC_DEPTH_FAST:
  return "CUSTOM_ERR_ADC_DEPTH_FAST";
case CUSTOM_ERR_ADC_DEPTH_SLOW:
  return "CUSTOM_ERR_ADC_DEPTH_SLOW";
case CUSTOM_ERR_ADC_UNKNOWN_CHANNEL:
  return "CUSTOM_ERR_ADC_UNKNOWN_CHANNEL";
case CUSTOM_ERR_ADC_USED:
  return "CUSTOM_ERR_ADC_USED";
case CUSTOM_ERR_ANGLE:
  return "CUSTOM_ERR_ANGLE";
case CUSTOM_ERR_ANGLE_CR:
  return "CUSTOM_ERR_ANGLE_CR";
case CUSTOM_ERR_ARRAY_IS_FULL:
  return "CUSTOM_ERR_ARRAY_IS_FULL";
case CUSTOM_ERR_ARRAY_REMOVE:
  return "CUSTOM_ERR_ARRAY_REMOVE";
case CUSTOM_ERR_ARRAY_REMOVE_ERROR:
  return "CUSTOM_ERR_ARRAY_REMOVE_ERROR";
case CUSTOM_ERR_ASSERT:
  return "CUSTOM_ERR_ASSERT";
case CUSTOM_ERR_ASSERT_VOID:
  return "CUSTOM_ERR_ASSERT_VOID";
case CUSTOM_ERR_AXIS_ORDER:
  return "CUSTOM_ERR_AXIS_ORDER";
case CUSTOM_ERR_BENCH_PARAM:
  return "CUSTOM_ERR_BENCH_PARAM";
case CUSTOM_ERR_BOTH_FRONTS_REQUIRED:
  return "CUSTOM_ERR_BOTH_FRONTS_REQUIRED";
case CUSTOM_ERR_BUFF_INIT_ERROR:
  return "CUSTOM_ERR_BUFF_INIT_ERROR";
case CUSTOM_ERR_CAN_CONFIGURATION:
  return "CUSTOM_ERR_CAN_CONFIGURATION";
case CUSTOM_ERR_CJ125_DIAG:
  return "CUSTOM_ERR_CJ125_DIAG";
case CUSTOM_ERR_COMMAND_LOWER_CASE_EXPECTED:
  return "CUSTOM_ERR_COMMAND_LOWER_CASE_EXPECTED";
case CUSTOM_ERR_DISPLAY_MODE:
  return "CUSTOM_ERR_DISPLAY_MODE";
case CUSTOM_ERR_DWELL_DURATION:
  return "CUSTOM_ERR_DWELL_DURATION";
case CUSTOM_ERR_ETB_TARGET:
  return "CUSTOM_ERR_ETB_TARGET";
case CUSTOM_ERR_EXT_MODE:
  return "CUSTOM_ERR_EXT_MODE";
case CUSTOM_ERR_FLASH_CRC_FAILED:
  return "CUSTOM_ERR_FLASH_CRC_FAILED";
case CUSTOM_ERR_FUEL_TABLE_NOT_READY:
  return "CUSTOM_ERR_FUEL_TABLE_NOT_READY";
case CUSTOM_ERR_ICU:
  return "CUSTOM_ERR_ICU";
case CUSTOM_ERR_ICU_AF:
  return "CUSTOM_ERR_ICU_AF";
case CUSTOM_ERR_ICU_DRIVER:
  return "CUSTOM_ERR_ICU_DRIVER";
case CUSTOM_ERR_ICU_PIN:
  return "CUSTOM_ERR_ICU_PIN";
case CUSTOM_ERR_ICU_STATE:
  return "CUSTOM_ERR_ICU_STATE";
case CUSTOM_ERR_IGNITION_MODE:
  return "CUSTOM_ERR_IGNITION_MODE";
case CUSTOM_ERR_INJECTOR_LAG:
  return "CUSTOM_ERR_INJECTOR_LAG";
case CUSTOM_ERR_INTERPOLATE:
  return "CUSTOM_ERR_INTERPOLATE";
case CUSTOM_ERR_INTERPOLATE_PARAM:
  return "CUSTOM_ERR_INTERPOLATE_PARAM";
case CUSTOM_ERR_INVALID_INJECTION_MODE:
  return "CUSTOM_ERR_INVALID_INJECTION_MODE";
case CUSTOM_ERR_INVALID_INPUT_ICU_PIN:
  return "CUSTOM_ERR_INVALID_INPUT_ICU_PIN";
case CUSTOM_ERR_INVALID_PIN:
  return "CUSTOM_ERR_INVALID_PIN";
case CUSTOM_ERR_LOCK_ISSUE:
  return "CUSTOM_ERR_LOCK_ISSUE";
case CUSTOM_ERR_LOGGING_NOT_READY:
  return "CUSTOM_ERR_LOGGING_NOT_READY";
case CUSTOM_ERR_LOGGING_NULL:
  return "CUSTOM_ERR_LOGGING_NULL";
case CUSTOM_ERR_LOOPED_QUEUE:
  return "CUSTOM_ERR_LOOPED_QUEUE";
case CUSTOM_ERR_MAP_AVG_OFFSET:
  return "CUSTOM_ERR_MAP_AVG_OFFSET";
case CUSTOM_ERR_MAP_CYL_OFFSET:
  return "CUSTOM_ERR_MAP_CYL_OFFSET";
case CUSTOM_ERR_MAP_START_ASSERT:
  return "CUSTOM_ERR_MAP_START_ASSERT";
case CUSTOM_ERR_MAP_TYPE:
  return "CUSTOM_ERR_MAP_TYPE";
case CUSTOM_ERR_NAN_TCHARGE:
  return "CUSTOM_ERR_NAN_TCHARGE";
case CUSTOM_ERR_NATURAL_LOGARITHM_ERROR:
  return "CUSTOM_ERR_NATURAL_LOGARITHM_ERROR";
case CUSTOM_ERR_NOT_INITIALIZED_TRIGGER:
  return "CUSTOM_ERR_NOT_INITIALIZED_TRIGGER";
case CUSTOM_ERR_NOT_INPUT_PIN:
  return "CUSTOM_ERR_NOT_INPUT_PIN";
case CUSTOM_ERR_NO_SHAPE:
  return "CUSTOM_ERR_NO_SHAPE";
case CUSTOM_ERR_OP_MODE:
  return "CUSTOM_ERR_OP_MODE";
case CUSTOM_ERR_OUT_OF_ORDER:
  return "CUSTOM_ERR_OUT_OF_ORDER";
case CUSTOM_ERR_PARSING_ERROR:
  return "CUSTOM_ERR_PARSING_ERROR";
case CUSTOM_ERR_PIN_ALREADY_USED_1:
  return "CUSTOM_ERR_PIN_ALREADY_USED_1";
case CUSTOM_ERR_PIN_ALREADY_USED_2:
  return "CUSTOM_ERR_PIN_ALREADY_USED_2";
case CUSTOM_ERR_PWM_1:
  return "CUSTOM_ERR_PWM_1";
case CUSTOM_ERR_PWM_2:
  return "CUSTOM_ERR_PWM_2";
case CUSTOM_ERR_PWM_CALLBACK_ASSERT:
  return "CUSTOM_ERR_PWM_CALLBACK_ASSERT";
case CUSTOM_ERR_PWM_DUTY_ASSERT:
  return "CUSTOM_ERR_PWM_DUTY_ASSERT";
case CUSTOM_ERR_PWM_STATE_ASSERT:
  return "CUSTOM_ERR_PWM_STATE_ASSERT";
case CUSTOM_ERR_PWM_SWITCH_ASSERT:
  return "CUSTOM_ERR_PWM_SWITCH_ASSERT";
case CUSTOM_ERR_SAME_ANGLE:
  return "CUSTOM_ERR_SAME_ANGLE";
case CUSTOM_ERR_SCHEDULING_ERROR:
  return "CUSTOM_ERR_SCHEDULING_ERROR";
case CUSTOM_ERR_SD_MOUNT_FAILED:
  return "CUSTOM_ERR_SD_MOUNT_FAILED";
case CUSTOM_ERR_SD_SEEK_FAILED:
  return "CUSTOM_ERR_SD_SEEK_FAILED";
case CUSTOM_ERR_SGTP_ARGUMENT:
  return "CUSTOM_ERR_SGTP_ARGUMENT";
case CUSTOM_ERR_SKIPPED_TOOTH_SHAPE:
  return "CUSTOM_ERR_SKIPPED_TOOTH_SHAPE";
case CUSTOM_ERR_STATE_NULL:
  return "CUSTOM_ERR_STATE_NULL";
case CUSTOM_ERR_T2_CHARGE:
  return "CUSTOM_ERR_T2_CHARGE";
case CUSTOM_ERR_TASK_TIMER_OVERFLOW:
  return "CUSTOM_ERR_TASK_TIMER_OVERFLOW";
case CUSTOM_ERR_TCHARGE_NOT_READY:
  return "CUSTOM_ERR_TCHARGE_NOT_READY";
case CUSTOM_ERR_TCHARGE_NOT_READY2:
  return "CUSTOM_ERR_TCHARGE_NOT_READY2";
case CUSTOM_ERR_TEST_ERROR:
  return "CUSTOM_ERR_TEST_ERROR";
case CUSTOM_ERR_THERM:
  return "CUSTOM_ERR_THERM";
case CUSTOM_ERR_TIMER_OVERFLOW:
  return "CUSTOM_ERR_TIMER_OVERFLOW";
case CUSTOM_ERR_TIMER_STATE:
  return "CUSTOM_ERR_TIMER_STATE";
case CUSTOM_ERR_TIMER_TEST_CALLBACK_NOT_HAPPENED:
  return "CUSTOM_ERR_TIMER_TEST_CALLBACK_NOT_HAPPENED";
case CUSTOM_ERR_TIMER_TEST_CALLBACK_WRONG_TIME:
  return "CUSTOM_ERR_TIMER_TEST_CALLBACK_WRONG_TIME";
case CUSTOM_ERR_TLE8888_RESPONSE:
  return "CUSTOM_ERR_TLE8888_RESPONSE";
case CUSTOM_ERR_TRG_ANGLE_ORDER:
  return "CUSTOM_ERR_TRG_ANGLE_ORDER";
case CUSTOM_ERR_TRIGGER_ANGLE_RANGE:
  return "CUSTOM_ERR_TRIGGER_ANGLE_RANGE";
case CUSTOM_ERR_TRIGGER_SYNC:
  return "CUSTOM_ERR_TRIGGER_SYNC";
case CUSTOM_ERR_TRIGGER_WAVEFORM_TOO_LONG:
  return "CUSTOM_ERR_TRIGGER_WAVEFORM_TOO_LONG";
case CUSTOM_ERR_TRIGGER_ZERO:
  return "CUSTOM_ERR_TRIGGER_ZERO";
case CUSTOM_ERR_UNEXPECTED_SHAFT_EVENT:
  return "CUSTOM_ERR_UNEXPECTED_SHAFT_EVENT";
case CUSTOM_ERR_UNEXPECTED_SPI:
  return "CUSTOM_ERR_UNEXPECTED_SPI";
case CUSTOM_ERR_UNKNOWN_PORT:
  return "CUSTOM_ERR_UNKNOWN_PORT";
case CUSTOM_ERR_WAVE_1:
  return "CUSTOM_ERR_WAVE_1";
case CUSTOM_ERR_WAVE_2:
  return "CUSTOM_ERR_WAVE_2";
case CUSTOM_ERR_ZERO_CRANKING_FUEL:
  return "CUSTOM_ERR_ZERO_CRANKING_FUEL";
case CUSTOM_ERR_ZERO_E0_MULT:
  return "CUSTOM_ERR_ZERO_E0_MULT";
case CUSTOM_ERR_ZERO_E85_MULT:
  return "CUSTOM_ERR_ZERO_E85_MULT";
case CUSTOM_EVENT_6626:
  return "CUSTOM_EVENT_6626";
case CUSTOM_FIRING_LENGTH:
  return "CUSTOM_FIRING_LENGTH";
case CUSTOM_FLSTACK:
  return "CUSTOM_FLSTACK";
case CUSTOM_HW_TIMER:
  return "CUSTOM_HW_TIMER";
case CUSTOM_ICU_DRIVER:
  return "CUSTOM_ICU_DRIVER";
case CUSTOM_ICU_DRIVER_STATE:
  return "CUSTOM_ICU_DRIVER_STATE";
case CUSTOM_IDLE_WAVE_CNT:
  return "CUSTOM_IDLE_WAVE_CNT";
case CUSTOM_IH_STACK:
  return "CUSTOM_IH_STACK";
case CUSTOM_INJ_DURATION:
  return "CUSTOM_INJ_DURATION";
case CUSTOM_INTEPOLATE_ERROR:
  return "CUSTOM_INTEPOLATE_ERROR";
case CUSTOM_INTEPOLATE_ERROR_2:
  return "CUSTOM_INTEPOLATE_ERROR_2";
case CUSTOM_INTEPOLATE_ERROR_3:
  return "CUSTOM_INTEPOLATE_ERROR_3";
case CUSTOM_INTEPOLATE_ERROR_4:
  return "CUSTOM_INTEPOLATE_ERROR_4";
case CUSTOM_INTERPOLATE_NAN:
  return "CUSTOM_INTERPOLATE_NAN";
case CUSTOM_INVALID_ADC:
  return "CUSTOM_INVALID_ADC";
case CUSTOM_INVALID_GLOBAL_OFFSET:
  return "CUSTOM_INVALID_GLOBAL_OFFSET";
case CUSTOM_INVALID_MODE_SETTING:
  return "CUSTOM_INVALID_MODE_SETTING";
case CUSTOM_INVALID_TPS_SETTING:
  return "CUSTOM_INVALID_TPS_SETTING";
case CUSTOM_KNOCK_WINDOW:
  return "CUSTOM_KNOCK_WINDOW";
case CUSTOM_LIST_LOOP:
  return "CUSTOM_LIST_LOOP";
case CUSTOM_LOGGING_BUFFER_OVERFLOW:
  return "CUSTOM_LOGGING_BUFFER_OVERFLOW";
case CUSTOM_MAF_NEEDED:
  return "CUSTOM_MAF_NEEDED";
case CUSTOM_MAP_ANGLE_PARAM:
  return "CUSTOM_MAP_ANGLE_PARAM";
case CUSTOM_NAN_ENGINE_LOAD:
  return "CUSTOM_NAN_ENGINE_LOAD";
case CUSTOM_NAN_ENGINE_LOAD_2:
  return "CUSTOM_NAN_ENGINE_LOAD_2";
case CUSTOM_NO_ETB_FOR_IDLE:
  return "CUSTOM_NO_ETB_FOR_IDLE";
case CUSTOM_NULL_ENGINE_PTR:
  return "CUSTOM_NULL_ENGINE_PTR";
case CUSTOM_NULL_EXECUTOR:
  return "CUSTOM_NULL_EXECUTOR";
case CUSTOM_NULL_SHAPE:
  return "CUSTOM_NULL_SHAPE";
case CUSTOM_OBD_26:
  return "CUSTOM_OBD_26";
case CUSTOM_OBD_59:
  return "CUSTOM_OBD_59";
case CUSTOM_OBD_6003:
  return "CUSTOM_OBD_6003";
case CUSTOM_OBD_6004:
  return "CUSTOM_OBD_6004";
case CUSTOM_OBD_6040:
  return "CUSTOM_OBD_6040";
case CUSTOM_OBD_6045:
  return "CUSTOM_OBD_6045";
case CUSTOM_OBD_6046:
  return "CUSTOM_OBD_6046";
case CUSTOM_OBD_6047:
  return "CUSTOM_OBD_6047";
case CUSTOM_OBD_62:
  return "CUSTOM_OBD_62";
case CUSTOM_OBD_63:
  return "CUSTOM_OBD_63";
case CUSTOM_OBD_64:
  return "CUSTOM_OBD_64";
case CUSTOM_OBD_65:
  return "CUSTOM_OBD_65";
case CUSTOM_OBD_66:
  return "CUSTOM_OBD_66";
case CUSTOM_OBD_67:
  return "CUSTOM_OBD_67";
case CUSTOM_OBD_68:
  return "CUSTOM_OBD_68";
case CUSTOM_OBD_69:
  return "CUSTOM_OBD_69";
case CUSTOM_OBD_70:
  return "CUSTOM_OBD_70";
case CUSTOM_OBD_71:
  return "CUSTOM_OBD_71";
case CUSTOM_OBD_72:
  return "CUSTOM_OBD_72";
case CUSTOM_OBD_73:
  return "CUSTOM_OBD_73";
case CUSTOM_OBD_74:
  return "CUSTOM_OBD_74";
case CUSTOM_OBD_75:
  return "CUSTOM_OBD_75";
case CUSTOM_OBD_76:
  return "CUSTOM_OBD_76";
case CUSTOM_OBD_77:
  return "CUSTOM_OBD_77";
case CUSTOM_OBD_78:
  return "CUSTOM_OBD_78";
case CUSTOM_OBD_79:
  return "CUSTOM_OBD_79";
case CUSTOM_OBD_81:
  return "CUSTOM_OBD_81";
case CUSTOM_OBD_82:
  return "CUSTOM_OBD_82";
case CUSTOM_OBD_83:
  return "CUSTOM_OBD_83";
case CUSTOM_OBD_84:
  return "CUSTOM_OBD_84";
case CUSTOM_OBD_85:
  return "CUSTOM_OBD_85";
case CUSTOM_OBD_86:
  return "CUSTOM_OBD_86";
case CUSTOM_OBD_87:
  return "CUSTOM_OBD_87";
case CUSTOM_OBD_88:
  return "CUSTOM_OBD_88";
case CUSTOM_OBD_89:
  return "CUSTOM_OBD_89";
case CUSTOM_OBD_90:
  return "CUSTOM_OBD_90";
case CUSTOM_OBD_91:
  return "CUSTOM_OBD_91";
case CUSTOM_OBD_92:
  return "CUSTOM_OBD_92";
case CUSTOM_OBD_93:
  return "CUSTOM_OBD_93";
case CUSTOM_OBD_94:
  return "CUSTOM_OBD_94";
case CUSTOM_OBD_95:
  return "CUSTOM_OBD_95";
case CUSTOM_OBD_96:
  return "CUSTOM_OBD_96";
case CUSTOM_OBD_ANALOG_INPUT_NOT_CONFIGURED:
  return "CUSTOM_OBD_ANALOG_INPUT_NOT_CONFIGURED";
case CUSTOM_OBD_ANGLE_CONSTRAINT_VIOLATION:
  return "CUSTOM_OBD_ANGLE_CONSTRAINT_VIOLATION";
case CUSTOM_OBD_COIL_PIN_NOT_ASSIGNED:
  return "CUSTOM_OBD_COIL_PIN_NOT_ASSIGNED";
case CUSTOM_OBD_HIGH_FREQUENCY:
  return "CUSTOM_OBD_HIGH_FREQUENCY";
case CUSTOM_OBD_IGNITION_MODE:
  return "CUSTOM_OBD_IGNITION_MODE";
case CUSTOM_OBD_INJECTION_NO_PIN_ASSIGNED:
  return "CUSTOM_OBD_INJECTION_NO_PIN_ASSIGNED";
case CUSTOM_OBD_KNOCK_PROCESSOR:
  return "CUSTOM_OBD_KNOCK_PROCESSOR";
case CUSTOM_OBD_LOCAL_FREEZE:
  return "CUSTOM_OBD_LOCAL_FREEZE";
case CUSTOM_OBD_LOW_FREQUENCY:
  return "CUSTOM_OBD_LOW_FREQUENCY";
case CUSTOM_OBD_MMC_ERROR:
  return "CUSTOM_OBD_MMC_ERROR";
case CUSTOM_OBD_MMC_START1:
  return "CUSTOM_OBD_MMC_START1";
case CUSTOM_OBD_MMC_START2:
  return "CUSTOM_OBD_MMC_START2";
case CUSTOM_OBD_NAN_INJECTION:
  return "CUSTOM_OBD_NAN_INJECTION";
case CUSTOM_OBD_NEG_INJECTION:
  return "CUSTOM_OBD_NEG_INJECTION";
case CUSTOM_OBD_PIN_CONFLICT:
  return "CUSTOM_OBD_PIN_CONFLICT";
case CUSTOM_OBD_SKIPPED_FUEL:
  return "CUSTOM_OBD_SKIPPED_FUEL";
case CUSTOM_OBD_SKIPPED_SPARK:
  return "CUSTOM_OBD_SKIPPED_SPARK";
case CUSTOM_OBD_TRG_DECODING:
  return "CUSTOM_OBD_TRG_DECODING";
case CUSTOM_OBD_TRIGGER_WAVEFORM:
  return "CUSTOM_OBD_TRIGGER_WAVEFORM";
case CUSTOM_OBD_TS_OUTPUT_MISMATCH:
  return "CUSTOM_OBD_TS_OUTPUT_MISMATCH";
case CUSTOM_OBD_TS_PAGE_MISMATCH:
  return "CUSTOM_OBD_TS_PAGE_MISMATCH";
case CUSTOM_OBD_UNEXPECTED_INJECTION_MODE:
  return "CUSTOM_OBD_UNEXPECTED_INJECTION_MODE";
case CUSTOM_OBD_UNKNOWN_FIRING_ORDER:
  return "CUSTOM_OBD_UNKNOWN_FIRING_ORDER";
case CUSTOM_OBD_WRONG_ADC_MODE:
  return "CUSTOM_OBD_WRONG_ADC_MODE";
case CUSTOM_OBD_WRONG_FIRING_ORDER:
  return "CUSTOM_OBD_WRONG_FIRING_ORDER";
case CUSTOM_OMODE_UNDEF:
  return "CUSTOM_OMODE_UNDEF";
case CUSTOM_OUT_OF_ORDER_COIL:
  return "CUSTOM_OUT_OF_ORDER_COIL";
case CUSTOM_PARAM_RANGE:
  return "CUSTOM_PARAM_RANGE";
case CUSTOM_PID_DTERM:
  return "CUSTOM_PID_DTERM";
case CUSTOM_PWM_CYCLE_START:
  return "CUSTOM_PWM_CYCLE_START";
case CUSTOM_PWM_DUTY_TOO_HIGH:
  return "CUSTOM_PWM_DUTY_TOO_HIGH";
case CUSTOM_RE_ADDING_INTO_EXECUTION_QUEUE:
  return "CUSTOM_RE_ADDING_INTO_EXECUTION_QUEUE";
case CUSTOM_RM_STACK:
  return "CUSTOM_RM_STACK";
case CUSTOM_RM_STACK_1:
  return "CUSTOM_RM_STACK_1";
case CUSTOM_SAME_TWICE:
  return "CUSTOM_SAME_TWICE";
case CUSTOM_SHAPE_LEN_ZERO:
  return "CUSTOM_SHAPE_LEN_ZERO";
case CUSTOM_SKIPPING_STROKE:
  return "CUSTOM_SKIPPING_STROKE";
case CUSTOM_SLOW_NOT_INVOKED:
  return "CUSTOM_SLOW_NOT_INVOKED";
case CUSTOM_SPARK_ANGLE_1:
  return "CUSTOM_SPARK_ANGLE_1";
case CUSTOM_SPARK_ANGLE_9:
  return "CUSTOM_SPARK_ANGLE_9";
case CUSTOM_STACK_6627:
  return "CUSTOM_STACK_6627";
case CUSTOM_STACK_6629:
  return "CUSTOM_STACK_6629";
case CUSTOM_STACK_ADC:
  return "CUSTOM_STACK_ADC";
case CUSTOM_STACK_ADC_6671:
  return "CUSTOM_STACK_ADC_6671";
case CUSTOM_STACK_SPI:
  return "CUSTOM_STACK_SPI";
case CUSTOM_SYNC_COUNT_MISMATCH:
  return "CUSTOM_SYNC_COUNT_MISMATCH";
case CUSTOM_SYNC_ERROR:
  return "CUSTOM_SYNC_ERROR";
case CUSTOM_TIMER_WATCHDOG:
  return "CUSTOM_TIMER_WATCHDOG";
case CUSTOM_TLE8888:
  return "CUSTOM_TLE8888";
case CUSTOM_TOO_LONG_CRANKING_FUEL_INJECTION:
  return "CUSTOM_TOO_LONG_CRANKING_FUEL_INJECTION";
case CUSTOM_TOO_LONG_FUEL_INJECTION:
  return "CUSTOM_TOO_LONG_FUEL_INJECTION";
case CUSTOM_TRIGGER_CYCLE:
  return "CUSTOM_TRIGGER_CYCLE";
case CUSTOM_TRIGGER_CYCLE_NAN:
  return "CUSTOM_TRIGGER_CYCLE_NAN";
case CUSTOM_TRIGGER_EVENT_TYPE:
  return "CUSTOM_TRIGGER_EVENT_TYPE";
case CUSTOM_TRIGGER_STACK:
  return "CUSTOM_TRIGGER_STACK";
case CUSTOM_TRIGGER_SYNC_ANGLE:
  return "CUSTOM_TRIGGER_SYNC_ANGLE";
case CUSTOM_TRIGGER_SYNC_ANGLE2:
  return "CUSTOM_TRIGGER_SYNC_ANGLE2";
case CUSTOM_TRIGGER_SYNC_ANGLE_RANGE:
  return "CUSTOM_TRIGGER_SYNC_ANGLE_RANGE";
case CUSTOM_TRIGGER_UNEXPECTED:
  return "CUSTOM_TRIGGER_UNEXPECTED";
case CUSTOM_TS_OVERFLOW:
  return "CUSTOM_TS_OVERFLOW";
case CUSTOM_UNEXPECTED_ENGINE_TYPE:
  return "CUSTOM_UNEXPECTED_ENGINE_TYPE";
case CUSTOM_UNEXPECTED_MAP_VALUE:
  return "CUSTOM_UNEXPECTED_MAP_VALUE";
case CUSTOM_UNEXPECTED_TDC_ANGLE:
  return "CUSTOM_UNEXPECTED_TDC_ANGLE";
case CUSTOM_UNKNOWN_ALGORITHM:
  return "CUSTOM_UNKNOWN_ALGORITHM";
case CUSTOM_VVT_MODE_NOT_SELECTED:
  return "CUSTOM_VVT_MODE_NOT_SELECTED";
case CUSTOM_VVT_SYNC_POSITION:
  return "CUSTOM_VVT_SYNC_POSITION";
case CUSTOM_WRONG_ALGORITHM:
  return "CUSTOM_WRONG_ALGORITHM";
case CUSTOM_ZERO_DWELL:
  return "CUSTOM_ZERO_DWELL";
case ERROR_FL_STACK_OVERFLOW:
  return "ERROR_FL_STACK_OVERFLOW";
case ERROR_HISTO_NAME:
  return "ERROR_HISTO_NAME";
case ERROR_LOGGING_SIZE_CALC:
  return "ERROR_LOGGING_SIZE_CALC";
case ERROR_NAN_FIND_INDEX:
  return "ERROR_NAN_FIND_INDEX";
case ERROR_NULL_BUFFER:
  return "ERROR_NULL_BUFFER";
case ERROR_TRIGGER_DRAMA:
  return "ERROR_TRIGGER_DRAMA";
case Internal_ForceMyEnumIntSize_cranking_obd_code:
  return "Internal_ForceMyEnumIntSize_cranking_obd_code";
case NO_LONGER_USED_CUSTOM_ERR_VVT_OUT_OF_RANGE:
  return "NO_LONGER_USED_CUSTOM_ERR_VVT_OUT_OF_RANGE";
case OBD_Barometric_Press_Circ:
  return "OBD_Barometric_Press_Circ";
case OBD_Barometric_Press_Circ_Range_Perf:
  return "OBD_Barometric_Press_Circ_Range_Perf";
case OBD_Camshaft_Position_Sensor_Circuit_Range_Performance:
  return "OBD_Camshaft_Position_Sensor_Circuit_Range_Performance";
case OBD_Crankshaft_Position_Sensor_A_Circuit_Malfunction:
  return "OBD_Crankshaft_Position_Sensor_A_Circuit_Malfunction";
case OBD_Engine_Coolant_Temperature_Circuit_Malfunction:
  return "OBD_Engine_Coolant_Temperature_Circuit_Malfunction";
case OBD_Intake_Air_Temperature_Circuit_Malfunction:
  return "OBD_Intake_Air_Temperature_Circuit_Malfunction";
case OBD_Manifold_Absolute_Pressure_Circuit_Malfunction:
  return "OBD_Manifold_Absolute_Pressure_Circuit_Malfunction";
case OBD_Mass_or_Volume_Air_Flow_Circuit_Malfunction:
  return "OBD_Mass_or_Volume_Air_Flow_Circuit_Malfunction";
case OBD_Oil_Pressure_Sensor_Malfunction:
  return "OBD_Oil_Pressure_Sensor_Malfunction";
case OBD_PCM_Processor_Fault:
  return "OBD_PCM_Processor_Fault";
case OBD_System_Voltage_Malfunction:
  return "OBD_System_Voltage_Malfunction";
case OBD_Throttle_Actuator_Control_Range_Performance_Bank_1:
  return "OBD_Throttle_Actuator_Control_Range_Performance_Bank_1";
case OBD_Throttle_Position_Sensor_Circuit_Malfunction:
  return "OBD_Throttle_Position_Sensor_Circuit_Malfunction";
case OBD_Throttle_Position_Sensor_Range_Performance_Problem:
  return "OBD_Throttle_Position_Sensor_Range_Performance_Problem";
case OBD_Vehicle_Speed_SensorB:
  return "OBD_Vehicle_Speed_SensorB";
case STACK_USAGE_4:
  return "STACK_USAGE_4";
case STACK_USAGE_BENCH:
  return "STACK_USAGE_BENCH";
case STACK_USAGE_COMMUNICATION:
  return "STACK_USAGE_COMMUNICATION";
case STACK_USAGE_MIL:
  return "STACK_USAGE_MIL";
case STACK_USAGE_STATUS:
  return "STACK_USAGE_STATUS";
  }
 return NULL;
}
