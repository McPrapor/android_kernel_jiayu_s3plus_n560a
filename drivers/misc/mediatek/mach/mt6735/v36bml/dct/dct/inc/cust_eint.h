/*
 * Generated by MTK SP Drv_CodeGen Version 03.13.6  for MT6753. Copyright MediaTek Inc. (C) 2013.
 * Wed Jun 27 13:02:11 2018
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH

#ifdef __cplusplus
extern "C" {
#endif

#define CUST_EINTF_TRIGGER_RISING     			1    //High Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_FALLING    			2    //Low Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_HIGH      				4    //High Polarity and Level Sensitive
#define CUST_EINTF_TRIGGER_LOW       				8    //Low Polarity and Level Sensitive

#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1

//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_HALL_1_NUM              1
#define CUST_EINT_HALL_1_DEBOUNCE_CN      0
#define CUST_EINT_HALL_1_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_HALL_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_IRQ_NFC_NUM              2
#define CUST_EINT_IRQ_NFC_DEBOUNCE_CN      0
#define CUST_EINT_IRQ_NFC_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_IRQ_NFC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_HALL_2_NUM              3
#define CUST_EINT_HALL_2_DEBOUNCE_CN      0
#define CUST_EINT_HALL_2_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_HALL_2_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_EXT_BUCK_OC_NUM              4
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_CN      0
#define CUST_EINT_EXT_BUCK_OC_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ACCDET_NUM              6
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_TOUCH_PANEL_NUM              10
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSDC1_INS_NUM              12
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN      64
#define CUST_EINT_MSDC1_INS_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_ALS_NUM              65
#define CUST_EINT_ALS_DEBOUNCE_CN      0
#define CUST_EINT_ALS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_OVP_DET_NUM              66
#define CUST_EINT_OVP_DET_DEBOUNCE_CN      0
#define CUST_EINT_OVP_DET_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_OVP_DET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_HTC_SENSOR_HUB_NUM              80
#define CUST_EINT_HTC_SENSOR_HUB_DEBOUNCE_CN      0
#define CUST_EINT_HTC_SENSOR_HUB_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_HTC_SENSOR_HUB_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}

#endif
#endif //_CUST_EINT_H


