/* 
 * File:   main.c
 * Author: George Lecakes
 *
 * Created on March 8, 2015, 9:15 PM
 */

//#include "library.h"


//#include "hal_settings.h"
#include <plib.h>
#include "system.h"

#include "bomberman.h"

void pic32Init()
{
    SYSTEMConfig(FCPU, SYS_CFG_ALL);

    EnableInterrupts();

    Timing_Init(); // initialize the timing module first
    Task_Init(); // initialize task managemnet module next
    UART_Init(2);

    //For two player
    UART_Init(1);

    //Task_Schedule(hello_world, 0, 2000, 2000);
}


int main(int argc, char** argv) {

    pic32Init();

    bomberManInit();

    while(1){
           
        SystemTick();
    }
    
    return (EXIT_SUCCESS);
}

