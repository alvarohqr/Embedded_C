/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

/*
 * Address of the Clock control register (AHB1ENR):
 * 0x4002 3800 + 0x30 = 0x40023830
 * Address of the GPIOD mode register (use to control mode I/O):
 * 0x4002 0C00 + 0x00 = 0x40020C00
 * Address of GPIOD output data register (use to write):
 * 0x4002 0C00 + 0x14 = 0x40020C04
 */


#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint32_t *pCCR = (uint32_t*)0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t *pPortDOutReg = (uint32_t*)0x40020C14;

	uint32_t *pPortAOutReg = (uint32_t*)0x40020000;
	uint32_t *pPortAIntReg = (uint32_t*)0x40020010;

	//Enable the clock for GPIOD, GPIOA peripheral in the AH1ENR
	*pCCR |= (1 << 3); // PORT D
	*pCCR |= (1 << 0); // PORT A

	//configuring PD12 as output
	*pPortDModeReg &= ~(3 << 24);
	//Make 24th position as 1 (SET)
	*pPortDModeReg |= (1 << 24);

	//Configuring PA0 as input
	*pPortAOutReg &= ~(3 << 0);

	//read the pin status of the output data register
	uint8_t pinStatus = (uint8_t)*pPortAIntReg & 0x1;

	while(1){
		if (pinStatus){
			//Turn on the led
			*pPortDOutReg |= (1 << 12);
		}else{
			*pPortDOutReg &= ~(1 << 12);
		}

		//3.SET the 12th bit of the output data register to make I/O pin-12 as HIGH
		//*pPortDOutReg |= (1 << 12);
	}

}