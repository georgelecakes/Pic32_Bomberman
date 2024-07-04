/****************************************************************************** 
GDL_MicroOLED.h
Header file for the MicroOLED PIC32 Library

George Lecakes
March 31, 2015

This is a modified version of the SparkFun Electronics code for Arduino, which
furthermore was heavily based around the MicroView library, written by GeekAmmo
(https://github.com/geekammo/MicroView-Arduino-Library), and released under 
the terms of the GNU General Public License as published by the Free Software 
Foundation, either version 3 of the License, or (at your option) any later 
version.

GNU General Public License <http://www.gnu.org/licenses/>.
******************************************************************************/

#ifndef GDL_MICROOLED_H
#define GDL_MICROOLED_H

#include <stdio.h>

/*
*BEGIN UNALTERED SPARKFUN CODE
*/

#define swap(a, b) { uint8_t t = a; a = b; b = t; }

//Screen value is either black or white
#define BLACK 0
#define WHITE 1

//Specifics of the hardware
#define LCDWIDTH			64
#define LCDHEIGHT			48
#define FONTHEADERSIZE		6

#define NORM				0
#define XOR					1

#define PAGE				0
#define ALL					1

#define WIDGETSTYLE0			0
#define WIDGETSTYLE1			1
#define WIDGETSTYLE2			2

//WHAT ARE THESE?
#define SETCONTRAST 		0x81
#define DISPLAYALLONRESUME 	0xA4
#define DISPLAYALLON 		0xA5
#define NORMALDISPLAY 		0xA6
#define INVERTDISPLAY 		0xA7
#define DISPLAYOFF 			0xAE
#define DISPLAYON 			0xAF
#define SETDISPLAYOFFSET 	0xD3
#define SETCOMPINS 			0xDA
#define SETVCOMDESELECT		0xDB
#define SETDISPLAYCLOCKDIV 	0xD5
#define SETPRECHARGE 		0xD9
#define SETMULTIPLEX 		0xA8
#define SETLOWCOLUMN 		0x00
#define SETHIGHCOLUMN 		0x10
#define SETSTARTLINE 		0x40
#define MEMORYMODE 			0x20
#define COMSCANINC 			0xC0
#define COMSCANDEC 			0xC8
#define SEGREMAP 			0xA0
#define CHARGEPUMP 			0x8D
#define EXTERNALVCC 		0x01
#define SWITCHCAPVCC 		0x02

// Scroll
#define ACTIVATESCROLL 					0x2F
#define DEACTIVATESCROLL 				0x2E
#define SETVERTICALSCROLLAREA 			0xA3
#define RIGHTHORIZONTALSCROLL 			0x26
#define LEFT_HORIZONTALSCROLL 			0x27
#define VERTICALRIGHTHORIZONTALSCROLL	0x29
#define VERTICALLEFTHORIZONTALSCROLL	0x2A

//Commands to send via SPI to the OLED
/*!
 * @enum CMD
 * Predefined commands for the screen
 */
typedef enum CMD {
	CMD_CLEAR,			//0
	CMD_INVERT,			//1
	CMD_CONTRAST,		//2
	CMD_DISPLAY,		//3
	CMD_SETCURSOR,		//4
	CMD_PIXEL,			//5
	CMD_LINE,			//6
	CMD_LINEH,			//7
	CMD_LINEV,			//8
	CMD_RECT,			//9
	CMD_RECTFILL,		//10
	CMD_CIRCLE,			//11
	CMD_CIRCLEFILL,		//12
	CMD_DRAWCHAR,		//13
	CMD_DRAWBITMAP,		//14
	CMD_GETLCDWIDTH,	//15
	CMD_GETLCDHEIGHT,	//16
	CMD_SETCOLOR,		//17
	CMD_SETDRAWMODE		//18
} commCommand_t;

//The mode to communicate over, should only be SPI for my implementation
typedef enum COMM_MODE{
	MODE_SPI,
	MODE_I2C,
	MODE_PARALLEL
} micro_oled_mode;

/*
*END UNALTERED SPARKFUN CODE
*/

// Constructor(s)
void init_MicroLED(uint8_t rst, uint8_t dc, uint8_t cs);
	
void begin(void);
size_t write(uint8_t);

// RAW LCD functions
/*!
 * Issue one of the predefined commands to the LCD
 */
void command(uint8_t c);
/*!
 * Transfer data to the LCD
 */
void data(uint8_t c);
/*!
 * Set the column address to begin writing
 */
void setColumnAddress(uint8_t add);
/*!
 * Set the page address to begin writing
 */
void setPageAddress(uint8_t add);
	
// LCD Draw functions
/*!
 * Clear the LCD screen
 */
void clear(uint8_t mode);
/*!
 * Invert the LCD Screen (black to white, white to black)
 */
void invert(uint8_t inv);
/*!
 * Adjust the LCD contrast
 */
void contrast(uint8_t contrast);

void display(void);
/*!
 * Set the location to draw
 */
void setCursor(uint8_t x, uint8_t y);
/*!
 * Draw a pixel
 */
void pixel(uint8_t x, uint8_t y);
/*!
 * Draw a line
 */
void line(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
/*!
 * Draw a rectagle
 */
void rect(uint8_t x, uint8_t y, uint8_t width, uint8_t height);
/*!
 *Draw a filled rectangle
 */
void rectFill(uint8_t x, uint8_t y, uint8_t width, uint8_t height);
/*!
 * Draw a cirlce
 */
void circle(uint8_t x, uint8_t y, uint8_t radius);
/*!
 * Draw a filled circle
 */
void circleFill(uint8_t x0, uint8_t y0, uint8_t radius);

void setDrawMode(uint8_t mode);
	
// Communication
/*!
 * Handles transfering data via spi
 */
void spiTransfer(byte data);
/*!
 * Sets up spi and routes to the proper pins
 */
void spiSetup();

//Class variables that now should become static?
uint8_t csPin, dcPin, rstPin;
uint8_t wrPin, rdPin, dPins[8];
volatile uint8_t *wrport, *wrreg, *rdport, *rdreg;
uint8_t wrpinmask, rdpinmask;
micro_oled_mode interface;
byte i2c_address;
volatile uint8_t *ssport, *dcport, *ssreg, *dcreg;	// use volatile because these are fixed location port address
uint8_t mosipinmask, sckpinmask, sspinmask, dcpinmask;
uint8_t foreColor,drawMode,fontWidth, fontHeight, fontType, fontStartChar, fontTotalChar, cursorX, cursorY;
uint16_t fontMapWidth;
static const unsigned char *fontsPointer[];


};
#endif
