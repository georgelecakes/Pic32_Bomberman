/* 
 * File:   system.h
 * Author: George Lecakes
 *
 * Created on March 8, 2015, 9:17 PM
 */

#ifndef SYSTEM_H
#define	SYSTEM_H

#define USE_UART2
#define SUBSYS_UART 2

#define PLAYER1_UART SUBSYS_UART

//For two player
//#define USE_UART1
//#define PLAYER2_UART 1


#define FCPU     8000000L
#define PERIPHERAL_CLOCK FCPU

//Networking
#define THIS_NODE LECAKES

#define USE_SPI1
// include the library header
#include "library.h"
// include list of modules used
#include "task.h"
#include "timing.h"

#include "spi.h"

#include "uart.h"

#include "buffer.h"
#include "buffer_printf.h"
#include "list.h"

#include "subsys.h"
#include "event.h"

#include "charReceiverList.h"
#include "game.h"

#include "nrf24.h"
#include "nrf24network.h"

#include "itemBuffer.h"

#endif	/* SYSTEM_H */

