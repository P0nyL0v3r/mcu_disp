/*
 * disp.h
 *
 *  Created on: 7 янв. 2022 г.
 *      Author: user
 */

#ifndef MCU_DISP_DISP_H_
#define MCU_DISP_DISP_H_

#include "conf.h"
#include "color.h"

#if DISP_USE_ST7735 == 1
	#include "st7735/st7735.h"
#else
	#error "undefined disp"
#endif

#endif /* MCU_DISP_DISP_H_ */
