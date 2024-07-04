/* 
 * File:   bomberman_graphics.h
 * Author: George
 *
 * Created on April 24, 2015, 6:36 PM
 */

#ifndef BOMBERMAN_GRAPHICS_H
#define	BOMBERMAN_GRAPHICS_H

#include <stdint.h>
#include "bomberman_map.h"
#include "bomberman_messages.h"
#include "terminal.h"


extern char map_2_2[MAP_DIM_2x2][MAP_DIM_2x2];
extern char map_3_3[MAP_DIM_3x3][MAP_DIM_3x3];
extern char map_4_4[MAP_DIM_4x4][MAP_DIM_4x4];
extern char map_5_5[MAP_DIM_5x5][MAP_DIM_5x5];

enum game_graphics
{
    graphic_clear = 32,
    graphic_fire = 36,
    graphic_bomb = 148,
    graphic_brick = 176,
    graphic_powerup_blastRadius = 206,
    graphic_indestructible = 219,
    graphic_powerup_bombCount = 228
};

void graphics_drawPowerup(uint8_t x, uint8_t y, uint8_t type);

void graphics_drawClear(uint8_t x, uint8_t y);

void graphics_drawYouHaveDied(uint8_t x, uint8_t y);

void graphics_drawYouWin(uint8_t x, uint8_t y);
void graphics_drawYouLose(uint8_t x, uint8_t y);

void graphics_drawPlayer(uint8_t playerIndex);
void graphics_drawPlayers(void);

void graphics_draw2x2Map(void);
void graphics_draw3x3Map(void);
void graphics_draw4x4Map(void);
void graphics_draw5x5Map(void);

void graphics_burn2x2(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burn3x3(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burn4x4(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burn5x5(uint8_t x, uint8_t y, uint8_t blastRadius);

void graphics_burnNorth2x2(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnSouth2x2(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnEast2x2(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnWest2x2(uint8_t x, uint8_t y, uint8_t blastRadius);

void graphics_burnNorth3x3(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnSouth3x3(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnEast3x3(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnWest3x3(uint8_t x, uint8_t y, uint8_t blastRadius);

void graphics_burnNorth4x4(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnSouth4x4(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnEast4x4(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnWest4x4(uint8_t x, uint8_t y, uint8_t blastRadius);

void graphics_burnNorth5x5(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnSouth5x5(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnEast5x5(uint8_t x, uint8_t y, uint8_t blastRadius);
void graphics_burnWest5x5(uint8_t x, uint8_t y, uint8_t blastRadius);



#endif	/* BOMBERMAN_GRAPHICS_H */

