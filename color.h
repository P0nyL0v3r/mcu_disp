/*
 * color.h
 *
 *  Created on: 7 янв. 2022 г.
 *      Author: user
 */

#ifndef MCU_DISP_COLOR_H_
#define MCU_DISP_COLOR_H_

#include "conf.h"

#if DISP_USE_COLOR_565 == 1

	#define DISP_COLOR(r, g, b) (((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3))
	//основные цвета:
	#define DISP_Black          0x0000      /*   0,   0,   0 */
	#define DISP_Grey        	0x7BEF      /* 128, 128, 128 */
	#define DISP_Silver         0xC618      /* 192, 192, 192 */
	#define DISP_White          0xFFFF      /* 255, 255, 255 */
	#define DISP_Fuchsia		0xF81F		/* 255,	  0, 255 */
	#define DISP_Purple         0x780F      /* 128,   0, 128 */
	#define DISP_Red            0xF800      /* 255,   0,   0 */
	#define DISP_Maroon         0x7800      /* 128,   0,   0 */
	#define DISP_Yellow         0xFFE0      /* 255, 255,   0 */
	#define DISP_Olive          0x7BE0      /* 128, 128,   0 */
	#define DISP_Lime           0x07E0      /*   0, 255,   0 */
	#define DISP_Green          0x03E0      /*   0, 128,   0 */
	#define DISP_Aqua			0x07FF		/*   0, 255, 255 */
	#define DISP_Teal			0x03EF		/*   0, 128, 128 */
	#define DISP_Blue           0x001F      /*   0,   0, 255 */
	#define DISP_Navy           0x000F      /*   0,   0, 128 */

	//красные тона
	#define DISP_LightCoral		0xEBEF		/* 240, 128, 128 */
	#define DISP_Salmon			0xF3ED		/* 250, 128, 114 */
	#define DISP_LightSalmon    0xFCEE		/* 255, 160, 122 */
	#define DISP_DarkRed		0x8000		/* 139,   0, 0   */

	//зеленые тона:
	#define DISP_GreenYellow    0xAFE5      /* 173, 255,  47 */
	#define DISP_DarkCyan       0x03EF      /*   0, 128, 128 */
	#define DISP_LightGreen		0x8F51		/* 144, 238, 144 */
	//серые тона:
	#define DISP_LightGrey		0xCE99		/* 211, 211, 211 */
	#define DISP_DarkGrey       0x39E7      /* 64, 64, 	   64*/

	//синие тона:
	#define DISP_Cyan           0x07FF      /*   0, 255, 255 */

	//желтые тона:
	#define DISP_LightYellow	0xFFFB		/* 255, 255, 224 */
	#define DISP_Khaki			0xEF11		/* 240, 230, 140 */

	//фиолетовые тона:
	#define DISP_Magenta        0xF81F      /* 255,   0, 255 */

	//коричнивые тона
	#define DISP_SaddleBrown	0x8222		/* 139,  69,  19 */

	//Оранжевые тона:
	#define DISP_Tomato			0xFB08		/* 255,  99,   71 */
	#define DISP_Orange         0xFD20      /* 255, 165,   0 */
	#define DISP_OrangeRed		0xFA20		/* 255,  69,   0 */
	#define DISP_DarkOrange		0xFC40		/* 255, 140,   0 */
	//Розовые тона:
	#define DISP_Pink			0xFDF8		/* 255, 192, 203 */

	//Голубые тона:
	#define DISP_Aquamarine		0x7FF9		/* 127, 255, 212 */
	#define DISP_DodgerBlue		0x1C7F		/*	30, 144, 255 */
#endif



#endif /* MCU_DISP_COLOR_H_ */
