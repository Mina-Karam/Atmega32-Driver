/*
 * LCD.h
 *
 *  Created on: Feb 10, 2022
 *      Author: Mina Karam
 */

#ifndef LCD_LCD_H_
#define LCD_LCD_H_

/* ======= Includes ======= */
#include "atmega32_device_header.h"
#include "atmega32_GPIO_driver.h"

/* ======= LCD Port Connections =========== */
#define LCD_DATA	GPIOA	// LCD Data Ports connected to PORTA Pins
#define LCD_CTRL	GPIOB	// LCD CTRL Ports connected to PORTB Pins

/* ======= LCD Control Pins ========== */
#define RS_SWITCH GPIO_PIN_1
#define RW_SWITCH GPIO_PIN_2
#define EN_SWITCH GPIO_PIN_3

/* ======= LCD MODE ========== */
#define EIGHT_BIT_MODE
//#define FOUR_BIT_MODE

#define DATA_shift 0 // 0:8 bit date mode | 4:4 bit data mode

/* ============= LCD Commands ================== */
#define LCD_CMD_FUNCTION_8BIT_2LINES   					(0x38)
#define LCD_CMD_FUNCTION_4BIT_2LINES   					(0x28)
#define LCD_CMD_MOVE_DISP_RIGHT       					(0x1C)
#define LCD_CMD_MOVE_DISP_LEFT   						(0x18)
#define LCD_CMD_MOVE_CURSOR_RIGHT   					(0x14)
#define LCD_CMD_MOVE_CURSOR_LEFT 	  					(0x10)
#define LCD_CMD_DISP_OFF   								(0x08)
#define LCD_CMD_DISP_ON_CURSOR   						(0x0E)
#define LCD_CMD_DISP_ON_CURSOR_BLINK   					(0x0F)
#define LCD_CMD_DISP_ON_BLINK   						(0x0D)
#define LCD_CMD_DISP_ON   								(0x0C)
#define LCD_CMD_ENTRY_DEC   							(0x04)
#define LCD_CMD_ENTRY_DEC_SHIFT   						(0x05)
#define LCD_CMD_ENTRY_INC_   							(0x06)
#define LCD_CMD_ENTRY_INC_SHIFT   						(0x07)
#define LCD_CMD_BEGIN_AT_FIRST_ROW						(0x80)
#define LCD_CMD_BEGIN_AT_SECOND_ROW						(0xC0)
#define LCD_CMD_CLEAR_SCREEN							(0x01)
#define LCD_CMD_ENTRY_MODE								(0x06)

/* ============= Functions Prototypes ============ */
void HAL_LCD_INIT(void);
void HAL_LCD_WRITE_COMMAND(uint8 command);
void HAL_LCD_WRITE_CHAR(uint8 character);
void HAL_LCD_WRITE_STRING(char* string);
void HAL_LCD_ISBUSY(void);
void HAL_LCD_CLEAR_SCREEN(void);
void HAL_LCD_GOTO_XY(uint8 line, uint8 position);
//void HAL_LCD_custom_characters(void);


/* ============= Global Variable ================= */
GPIO_PinConfig_t PinConfig ;

#endif /* LCD_LCD_H_ */
