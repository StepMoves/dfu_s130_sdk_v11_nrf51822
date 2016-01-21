/* Copyright (c) 2016 Lianluo Company. All Rights Reserved.
 * air_filter board pins define
 * 2016.1.4
*/

#ifndef PCA_AIR_FILTER_H
#define PCA_AIR_FILTER_H

#define BLE_ENABLE

#define LEDS_NUMBER    3

#define LED_START      21
#define LED_1          21
#define LED_2          22
#define LED_3          23
#define LED_STOP       23

#define LEDS_LIST { LED_1, LED_2, LED_3 }

#define LED_RED      LED_3
#define LED_GREEN    LED_1
#define LED_BLUE     LED_2

#define LED_RED_MASK   (1<<LED_RED)
#define LED_GREEN_MASK (1<<LED_GREEN)
#define LED_BLUE_MASK  (1<<LED_BLUE)


#define LEDS_MASK      (LED_RED_MASK | LED_GREEN_MASK | LED_BLUE_MASK )
/* all LEDs are lit when GPIO is low */
#define LEDS_INV_MASK  LEDS_MASK

#define BUTTONS_NUMBER 2



#define RX_PIN_NUMBER  11
#define TX_PIN_NUMBER  9
#define CTS_PIN_NUMBER 10
#define RTS_PIN_NUMBER 8
#define HWFC           false



#define BUTTON_FAN     16
#define BUTTON_POWER   17
#define BSP_BUTTON_FAN     BUTTON_FAN
#define BSP_BUTTON_POWER   BUTTON_POWER
#define BUTTONS_LIST { BUTTON_FAN, BUTTON_POWER }
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BSP_BUTTON_FAN_MASK (1<<BSP_BUTTON_FAN)
#define BSP_BUTTON_POWER_MASK (1<<BSP_BUTTON_POWER)
#if 0
/* Leds definitions for air_filter */
#define LEDS_NUMBER    3


#define LED_1          28
#define LED_2          29
#define LED_3          23


#define LEDS_LIST { LED_1, LED_2, LED_3 }

#define LED_RED      LED_1
#define LED_GREEN    LED_2
#define LED_BLUE     LED_3

#define LED_RED_MASK   (1<<LED_RED)
#define LED_GREEN_MASK (1<<LED_GREEN)
#define LED_BLUE_MASK  (1<<LED_BLUE)

#define LEDS_MASK      (LED_RED_MASK | LED_GREEN_MASK | LED_BLUE_MASK )
/* all LEDs are lit when GPIO is low */
#define LEDS_INV_MASK  ~LEDS_MASK


/* Buttons definitions for air_filter */
#define BUTTONS_NUMBER 2

#define BUTTON_FAN     22
#define BUTTON_POWER   30

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_LIST { BUTTON_FAN, BUTTON_POWER }

#define BSP_BUTTON_FAN     BUTTON_FAN
#define BSP_BUTTON_POWER   BUTTON_POWER

#define BSP_BUTTON_FAN_MASK (1<<BSP_BUTTON_FAN)
#define BSP_BUTTON_POWER_MASK (1<<BSP_BUTTON_POWER)

#define BUTTONS_MASK   (BSP_BUTTON_FAN_MASK | BSP_BUTTON_POWER)

/* Serial port define usart */
#define HWFC           false
#define RTS_PIN_NUMBER 3   // unuse
#define CTS_PIN_NUMBER 2   // unuse
#define RX_PIN_NUMBER  17
#define TX_PIN_NUMBER  16
#endif 
/* Power mannager define axp202 */
#define POWER_ENABLE_PIN    7  
#define POWER_IPSOUT_PIN    6
#define POWER_INT_PIN       10   // INTTERRUPT
#define POWER_READY_PIN     5    // POWER IS OK
#define POWER_SCL_PIN       8    // I2C SCK
#define POWER_SDA_PIN       9    // I2C SDA
#define POWER_CHGLED_PIN    11

/* EEPROM define at24c128 */
//#define EEPROM_A0_PIN       0    // IC SELECT ADDRESS 
//#define EEPROM_A1_PIN       1    // IC SELECT ADDRESS
#define EEPROM_SCl_PIN      1    // I2C SCK
#define EEPROM_SDA_PIN      0    // I2C SDA

/* hygrothermograph define sht20 */
#define SHT_SCL_PIN         5    // 
#define SHT_SDA_PIN         6    //

/* FAN define  */
#define FAN_POWER_PIN       13
#define FAN_PWM_PIN         19

/* 5 voltage define sx1308 */
#define VOLTAGE_5_EN_PIN    30

/* PM2.5 define  pms5003 */
#define PM2_5_SET_PIN       12
#define PM2_5_RESET_PIN     15//10
#define PM2_5_POWER_PIN     10//16
#define RX_PIN_PM2_5        14//11
#define TX_PIN_PM2_5        13//9


/* unuse pin define */
#define UNUSE_1_PIN         12

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      NRF_CLOCK_LFCLKSRC_XTAL_20_PPM

#ifndef NULL
  #define NULL 0
#endif


#endif // PCA_AIR_FILTER_H
