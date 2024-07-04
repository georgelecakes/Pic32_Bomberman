/* 
 * File:   bomberman_graphics.c
 * Author: George Lecakes
 *
 * Created on April 24, 2015, 6:44 PM
 */

#include "bomberman_graphics.h"
#include "bomberman_gamestate.h"

void graphics_drawPowerup(uint8_t x, uint8_t y, uint8_t type)
{
    switch(type)
    {
        case blastRadius:
            Game_CharXY(graphic_powerup_blastRadius, x, y);
            break;
        case increaseBombCount:
            Game_CharXY(graphic_powerup_bombCount, x, y);
            break;
    }
}

void graphics_drawClear(uint8_t x, uint8_t y)
{
    Game_CharXY(graphic_clear, x, y);
}

void graphics_drawYouHaveDied(uint8_t x, uint8_t y)
{
    Game_SetColor(ForegroundMagenta);
    Game_SetColor(BackgroundGreen);
    Game_CharXY('*',x,y);
    Game_Printf("*********************");
    Game_Printf("*******YOU DIED******");
    Game_Printf("*****YOU ARE NOW*****");
    Game_Printf("******SPECTATING*****");
    Game_Printf("*********************");
}

void graphics_drawYouWin(uint8_t x, uint8_t y)
{
    Game_SetColor(ForegroundRed);
    Game_SetColor(BackgroundYellow);
    Game_CharXY('*',x,y);
    Game_Printf("******************");
    Game_Printf("*****YOU WIN!*****");
    Game_Printf("******************");
}

void graphics_drawYouLose(uint8_t x, uint8_t y)
{
    Game_SetColor(ForegroundRed);
    Game_SetColor(BackgroundYellow);
    Game_CharXY('*',x,y);
    Game_Printf("******************");
    Game_Printf("*****YOU LOSE*****");
    Game_Printf("******************");
}

void graphics_drawPlayer(uint8_t playerIndex)
{
    Game_SetColor(players[playerIndex].color);
    Game_CharXY(players[playerIndex].symbol, players[playerIndex].x, players[playerIndex].y);
}

void graphics_drawPlayers(void)
{
    uint8_t i = 0;

    for( ; i < gameState.numberPlayers; i++ )
    {
        if(players[i].active)
        {
            Game_SetColor(players[i].color);
            Game_CharXY(players[i].symbol, players[i].x, players[i].y);
        }
    }
}

void graphics_draw2x2Map(void)
{
    Game_ClearScreen();
    uint8_t x = 0;
    uint8_t y = 0;
    for( ; y < MAP_DIM_2x2; y++){
        for( ;x < MAP_DIM_2x2; x++){
            Game_CharXY(map_2_2[x][y], x, y);
        }
        x = 0;
    }
}

void graphics_draw3x3Map(void)
{
    Game_ClearScreen();
    uint8_t x = 0;
    uint8_t y = 0;
    for( ; y < MAP_DIM_3x3; y++){
        for( ;x < MAP_DIM_3x3; x++){
            Game_CharXY(map_3_3[x][y], x, y);
            }
            x = 0;
    }
}

void graphics_draw4x4Map(void)
{
    Game_ClearScreen();
    uint8_t x = 0;
    uint8_t y = 0;
    for( ; y < MAP_DIM_4x4; y++){
        for( ;x < MAP_DIM_4x4; x++){
            Game_CharXY(map_4_4[x][y], x, y);
            }
            x = 0;
    }
}

void graphics_draw5x5Map(void)
{
    Game_ClearScreen();
    uint8_t x = 0;
    uint8_t y = 0;
    for( ; y < MAP_DIM_5x5; y++){
        for( ;x < MAP_DIM_5x5; x++){
            Game_CharXY(map_5_5[x][y], x, y);
            }
            x = 0;
    }
}

void graphics_burn2x2(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    graphics_burnNorth2x2(x,y,blastRadius);
    graphics_burnSouth2x2(x,y,blastRadius);
    graphics_burnEast2x2(x,y,blastRadius);
    graphics_burnWest2x2(x,y,blastRadius);
}

void graphics_burn3x3(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    graphics_burnNorth3x3(x,y,blastRadius);
    graphics_burnSouth3x3(x,y,blastRadius);
    graphics_burnEast3x3(x,y,blastRadius);
    graphics_burnWest3x3(x,y,blastRadius);
}

void graphics_burn4x4(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    graphics_burnNorth4x4(x,y,blastRadius);
    graphics_burnSouth4x4(x,y,blastRadius);
    graphics_burnEast4x4(x,y,blastRadius);
    graphics_burnWest4x4(x,y,blastRadius);
}

void graphics_burn5x5(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    graphics_burnNorth5x5(x,y,blastRadius);
    graphics_burnSouth5x5(x,y,blastRadius);
    graphics_burnEast5x5(x,y,blastRadius);
    graphics_burnWest5x5(x,y,blastRadius);
}

void graphics_burnNorth2x2(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_2_2[x][y-i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y - i);

        if(map_2_2[x][y-i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnSouth2x2(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_2_2[x][y+i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y + i);

        if(map_2_2[x][y+i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnEast2x2(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_2_2[x+i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x+i, y);

        if(map_2_2[x+i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnWest2x2(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_2_2[x-i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x-i, y);

        if(map_2_2[x-i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnNorth3x3(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_3_3[x][y-i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y - i);

        if(map_3_3[x][y-i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnSouth3x3(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_3_3[x][y+i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y + i);

        if(map_3_3[x][y+i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnEast3x3(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_3_3[x+i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x+i, y);

        if(map_3_3[x+i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnWest3x3(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_3_3[x-i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x-i, y);

        if(map_3_3[x-i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnNorth4x4(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_4_4[x][y-i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y - i);

        if(map_4_4[x][y-i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnSouth4x4(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_4_4[x][y+i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y + i);

        if(map_4_4[x][y+i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnEast4x4(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_4_4[x+i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x+i, y);

        if(map_4_4[x+i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnWest4x4(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_4_4[x-i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x-i, y);

        if(map_4_4[x-i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnNorth5x5(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_5_5[x][y-i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y - i);

        if(map_5_5[x][y-i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnSouth5x5(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_5_5[x][y+i] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x, y + i);

        if(map_5_5[x][y+i] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnEast5x5(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_5_5[x+i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x+i, y);

        if(map_5_5[x+i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}

void graphics_burnWest5x5(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    uint8_t i = 0;
    for( ; i <= blastRadius ; i++)
    {

        if(map_5_5[x-i][y] == graphic_indestructible)
        {
            break;
        }

        //Burn the place
        Game_CharXY(graphic_fire, x-i, y);

        if(map_5_5[x-i][y] == graphic_brick) //Break if we burned brick
        {
            break;
        }
    }
}
