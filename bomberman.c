#include "bomberman.h"

#define x_offset 4
#define y_offset 4

Player Player1_default= {255, "p01", 1+x_offset*0,   1+y_offset*0,   149, graphic_clear, bombs+0*MAX_BOMBS_PER_PLAYER, ForegroundCyan, 2, 1};
Player Player2_default= {255, "p02", 1+x_offset*1,   1+y_offset*0,   149, graphic_clear, bombs+1*MAX_BOMBS_PER_PLAYER, ForegroundGreen, 2, 1};
Player Player3_default= {255, "p03", 1+x_offset*0,   1+y_offset*1,   149, graphic_clear, bombs+2*MAX_BOMBS_PER_PLAYER, ForegroundMagenta, 2, 1};
Player Player4_default= {255, "p04", 1+x_offset*1,   1+y_offset*1,   149, graphic_clear, bombs+3*MAX_BOMBS_PER_PLAYER, ForegroundRed, 2, 1};
Player Player5_default= {255, "p05", 1+x_offset*2,   1+y_offset*0,   149, graphic_clear, bombs+4*MAX_BOMBS_PER_PLAYER, ForegroundWhite, 2, 1};
Player Player6_default= {255, "p06", 1+x_offset*2,   1+y_offset*1,   149, graphic_clear, bombs+5*MAX_BOMBS_PER_PLAYER, ForegroundYellow, 2, 1};
Player Player7_default= {255, "p07", 1+x_offset*2,   1+y_offset*2,   64, graphic_clear, bombs+6*MAX_BOMBS_PER_PLAYER, ForegroundCyan, 2, 1};
Player Player8_default= {255, "p08", 1+x_offset*1,   1+y_offset*2,   64, graphic_clear, bombs+7*MAX_BOMBS_PER_PLAYER, ForegroundGreen, 2, 1};
Player Player9_default= {255, "p09", 1+x_offset*0,   1+y_offset*2,   64, graphic_clear, bombs+8*MAX_BOMBS_PER_PLAYER, ForegroundMagenta, 2, 1};
Player Player10_default={255, "p10", 1+x_offset*3,   1+y_offset*0,   64, graphic_clear, bombs+9*MAX_BOMBS_PER_PLAYER, ForegroundRed, 2, 1};
Player Player11_default={255, "p11", 1+x_offset*3,   1+y_offset*1,   64, graphic_clear, bombs+10*MAX_BOMBS_PER_PLAYER, ForegroundWhite, 2, 1};
Player Player12_default={255, "p12", 1+x_offset*3,   1+y_offset*2,   64, graphic_clear, bombs+11*MAX_BOMBS_PER_PLAYER, ForegroundYellow, 2, 1};
Player Player13_default={255, "p13", 1+x_offset*3,   1+y_offset*3,   132, graphic_clear, bombs+12*MAX_BOMBS_PER_PLAYER, ForegroundCyan, 2, 1};
Player Player14_default={255, "p14", 1+x_offset*2,   1+y_offset*3,   132, graphic_clear, bombs+13*MAX_BOMBS_PER_PLAYER, ForegroundGreen, 2, 1};
Player Player15_default={255, "p15", 1+x_offset*1,   1+y_offset*3,   132, graphic_clear, bombs+14*MAX_BOMBS_PER_PLAYER, ForegroundMagenta, 2, 1};
Player Player16_default={255, "p16", 1+x_offset*0,   1+y_offset*3,   132, graphic_clear, bombs+15*MAX_BOMBS_PER_PLAYER, ForegroundRed, 2, 1};
Player Player17_default={255, "p17", 1+x_offset*4,   1+y_offset*0,   132, graphic_clear, bombs+16*MAX_BOMBS_PER_PLAYER, ForegroundWhite, 2, 1};
Player Player18_default={255, "p18", 1+x_offset*4,   1+y_offset*1,   132, graphic_clear, bombs+17*MAX_BOMBS_PER_PLAYER, ForegroundYellow, 2, 1};
Player Player19_default={255, "p19", 1+x_offset*4,   1+y_offset*2,   134, graphic_clear, bombs+18*MAX_BOMBS_PER_PLAYER, ForegroundCyan, 2, 1};
Player Player20_default={255, "p20", 1+x_offset*4,   1+y_offset*3,   134, graphic_clear, bombs+19*MAX_BOMBS_PER_PLAYER, ForegroundGreen, 2, 1};
Player Player21_default={255, "p21", 1+x_offset*4,   1+y_offset*4,   134, graphic_clear, bombs+20*MAX_BOMBS_PER_PLAYER, ForegroundMagenta, 2, 1};
Player Player22_default={255, "p22", 1+x_offset*3,   1+y_offset*4,   134, graphic_clear, bombs+21*MAX_BOMBS_PER_PLAYER, ForegroundRed, 2, 1};
Player Player23_default={255, "p23", 1+x_offset*2,   1+y_offset*4,   134, graphic_clear, bombs+22*MAX_BOMBS_PER_PLAYER, ForegroundWhite, 2, 1};
Player Player24_default={255, "p24", 1+x_offset*1,   1+y_offset*4,   134, graphic_clear, bombs+23*MAX_BOMBS_PER_PLAYER, ForegroundYellow, 2, 1};
Player Player25_default={255, "p25", 1+x_offset*0,   1+y_offset*4,   158, graphic_clear, bombs+24*MAX_BOMBS_PER_PLAYER, ForegroundCyan, 2, 1};


char* titleTile[] = {
"                                `  :                                                                ",
"                                /:+o `                                                              ",
"                              /.+y:ss+                                                              ",
"                 /o+ooo++`    oyy+s+s    ::  .:  //+/`  +++++o+++//`  `/  /    ++: /// `++.         ",
"                ./      `o    .hsd-s:   `sN. oN.`:  `+ .-    yo    +  /N:/m/  /` N:: d::.+N`        ",
"                +        :h   oMMhmoy.  /.M-/.M/:`:y``h/ `---N.`Ns :h--my:ds .:  Nh  sy/ yM`        ",
"               --  +md.  :M:smMMMdM.   :..M/-`M// yM-`Mo oMMMm :Md +M+ dy yh / : Nh  /d/ mm         ",
"               +  `NMm:  dMMMMMMMMM-  `: `Mo  N+: ms oM- dMys+ sN:`mm  y` sh-./s m+ `.M-.Ms         ",
"              :.  oMd+  oMMm::NMMMMm  /  `m`  Nh`   :NN  `` m. .``hM:  `  om:`ms d.-+ m /M/         ",
"              /  `Nd:  oMMM.  mMMMMM::`   -   Ny    /Ny    -m   .mMy .  :`+m :d+ y oy + sM`         ",
"             :`      `hMMMM.`sMMMMMMh-     `  m/ s+  s: +yhmo - .MN`-+  d`/:     : dd   mm          ",
"             /       `/mMMMMMMMMMMMMh .-   s  d`-MM  h` NMmm: h `M/ d+ :M   +os+  `MN  `My          ",
"            /`         yMMMMMMMMMMMMy h.  .m  s sM+ .y -ds/h .N  h +M/ mN  :MMMy `/My++yM/          ",
"           `/  `++:    NMMMMMMMMMMMM+:M`  yd  ` /. `d+    -y oM  ``NMosMNosNM/ /MMMM-sMMM.          ",
"           /   yMMM/   MMMMMMMMMMMMM-mN  .Md      .dM.  `.ss+mMhhmNMyyMM:dMMh   +s+/  -.`           ",
"          `:  -Mm-+-  `MMMMMMMMMMMMhsMd  yMh    -sMMMhdmMMMMMMhoNmdy` :-  `                         ",
"          +   hM++:   hMMMMMMMMMMMM+MNo`:MNoyhmMMMMs.dNmhso/:-`                                     ",
"         -:  :Mm+`  `hMMMMMMMMMMMMdmMosMMMo.mMmhs+`                                                 ",
"         +   ``    -mMN:NMMMMMMMMMMMm  oo/`                                                         ",
"        --       .yMMd. .mMMMMMd+o/-`                                                               ",
"        o     `/hMMMo     /syo-                                                                     ",
"       :- .:ohNMMNs.                                                                                ",
"       hmMMMMMNy/`                                                                                  ",
"       -Nmyo/-                                                                                      ",
0
};

/*
 * CP866 Codes
 * i = 219
 * b = 176
 * space = ' ;
 * fire = 36
 * bomb = 228
 * player = 253
 */

char map_2_2[MAP_DIM_2x2][MAP_DIM_2x2]=
{
    {219,219,219,219,219,219,219,219,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,219},
    {219,219,219,219,219,219,219,219,219,219}
};


char map_3_3[MAP_DIM_3x3][MAP_DIM_3x3] =
{
    {219,219,219,219,219,219,219,219,219,219,219,219,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,219,219,219,219,219,219,219,219,219,219,219,219,219}
};

char map_4_4[MAP_DIM_4x4][MAP_DIM_4x4] =
{
    {219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219}
};

char map_5_5[MAP_DIM_5x5][MAP_DIM_5x5] =
{
    {219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,' ',' ',176,176,219},
    {219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,' ',219,176,219,219},
    {219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219},
    {219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,176,219,219},
    {219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219}
};


GameState gameState = {0, 2, 0, 0, GAMESTATE_WAITING_FOR_PLAYERS, CLIENT_BOMBERMAN, 0};
Bomb Bomb_default = {0,0,graphic_bomb,2,5000, false};
Player player_default={1,1,149, graphic_clear, null, ForegroundGreen, 2, 1};


void bomberManInit()
{
    gameState.gameMode = GAMESTATE_WAITING_FOR_PLAYERS;
    gameState.role = BOMBERMAN_ROLE;
    gameState.numberPlayers = 0;

    Game_SetColor(ForegroundWhite);
    Game_SetColor(BackgroundBlack);

    setupPlayers();

    if(gameState.role == CLIENT_BOMBERMAN)
    {
        GAMEID = Game_Register("bmclient","Bomberman multiplayer game client.", prePlay, help);
        nrf24_RegisterMsgHandler(BOMBERMAN_MSG, clientMessageHandler);
    }

    else if(gameState.role == SERVER_BOMBERMAN)
    {
        GAMEID = Game_Register("bmserver", "Bomberman multiplayer game server.", prePlay, help);
        nrf24_RegisterMsgHandler(BOMBERMAN_MSG, serverMessageHandler);
    }

    else
    {
        Game_Printf("\nImproper role established, must be either BOMBERMAN_ROLE_CLIENT or BOMBERMAN_ROLE_SERVER.\n");
        return;
    }
}

void prePlay(void)
{
    if(gameState.role == CLIENT_BOMBERMAN)
    {
    Game_ClearScreen();
    Game_Printf("\rBomberman client will start in 2 seconds.\n\n");
    Game_Printf("\rYou will be waiting for the server to request players and start a game.\n\n");
    Game_Printf("\rGame Play Instructions:\n");
    Game_Printf("\rBomb the other player using W,A,S,D to move and place bombs with space bar in multiplayer player mode.\n");
    Task_Schedule(clientStartUp, 0, 2000, 0);
    }

    else if(gameState.role == SERVER_BOMBERMAN)
    {
    Game_ClearScreen();
    Game_Printf("\rBomberman server will start in 2 second.\n");
    Game_Printf("\rControls:\n");
    Game_Printf("\r B - request players\n");
    Game_Printf("\r N - start game with registered players\n");
    Game_Printf("\r R - refresh registered player list\n");
    Game_Printf("\rGame Play Instructions:\n");
    Game_Printf("\rYou are the server, sit back and watch...\n");
    Task_Schedule(serverStartUp, 0, 2000, 0);
    }
}

void serverStartUp()
{
    Game_Printf("\rServer starting up...\n");
    Game_RegisterPlayer1Receiver(handleServerInput);
}

void clientStartUp()
{
    Game_SetColor(ForegroundYellow);
    Game_SetColor(BackgroundBlue);
    //Move to top of screen
    Game_CharXY('t',0,0);
    //Print Logo
    Game_DrawTile(titleTile,0,0);
    Game_Printf("\n\rTest Mode enabled, press 1-4 to change character number and draw resultant map.\n");
    //At least one player needs to be registered
    Game_RegisterPlayer1Receiver(handleClientInput);
}

void calculateMapSize()
{
    if( gameState.numberPlayers <= 4)
    {
        Game_Printf("\r2x2 grid loading...\n");
        gameState.map = 2;
        gameState.mapSizeX = MAP_DIM_2x2;
        gameState.mapSizeY = MAP_DIM_2x2;
    }

    else if(gameState.numberPlayers <= 9)
    {
        Game_Printf("\r3x3 grid loading...\n");
        gameState.map = 3;
        gameState.mapSizeX = MAP_DIM_3x3;
        gameState.mapSizeY = MAP_DIM_3x3;
    }

    else if(gameState.numberPlayers <= 16)
    {
        Game_Printf("\r4x4 grid loading...\n");
        gameState.map = 4;
        gameState.mapSizeX = MAP_DIM_4x4;
        gameState.mapSizeY = MAP_DIM_4x4;
    }
    else if(gameState.numberPlayers <= 25)
    {
        Game_Printf("\r5x5 grid loading...\n");
        gameState.map = 5;
        gameState.mapSizeX = MAP_DIM_5x5;
        gameState.mapSizeY = MAP_DIM_5x5;
    }
    else
    {
        //ERROR, TOO MANY PLAYERS!
        Game_Printf("\rError, too many players!\n");
        gameState.map = null;
        gameState.mapSizeX = 0;
        gameState.mapSizeY = 0;
    }
}

void setupPlayers(void)
{
    /* There is a border around the entire arena of invincible blocks
     * all players spawn in the upper left of their own grid.
     * The map size is based on the number of players
     * 4 panels, 9 panels, 16 panels, 25 panels
     * Players should be drawn diagonally
    */
    uint8_t p = 0;
    Bomb* bomb_array = bombs;
    players[0] = Player1_default;
    players[1] = Player2_default;
    players[2] = Player3_default;
    players[3] = Player4_default;
    players[4] = Player5_default;
    players[5] = Player6_default;
    players[6] = Player7_default;
    players[7] = Player8_default;
    players[8] = Player9_default;
    players[9] = Player10_default;
    players[10] = Player11_default;
    players[11] = Player12_default;
    players[12] = Player13_default;
    players[13] = Player14_default;
    players[14] = Player15_default;
    players[15] = Player16_default;
    players[16] = Player17_default;
    players[17] = Player18_default;
    players[18] = Player19_default;
    players[19] = Player20_default;
    players[20] = Player21_default;
    players[21] = Player22_default;
    players[22] = Player23_default;
    players[23] = Player24_default;
    players[24] = Player25_default;

    for( ; p < MAX_PLAYERS;p++)
    {
        //Pointer to iterate over every bomb and powerup for initialization
        Bomb* bombsIterator = bomb_array;
        Powerup* powerupIterator = powerups;
        //Iterate over all of this players bombs and set them up
        uint8_t b = 0;
        for( ; b < MAX_BOMBS_PER_PLAYER ; b++)
        {
            bombsIterator[b].x = 0;
            bombsIterator[b].y = 0;
            bombsIterator[b].symbol = graphic_bomb;
            bombsIterator[b].duration = 3000;
            bombsIterator[b].blastSize = 3;
            bombsIterator[b].active = false;
        }

        uint8_t p = 0;
        for(; p < MAX_POWERUPS_PER_PLAYER; p++)
        {
            powerupIterator[p].x = 0;
            powerupIterator[p].y = 0;
            powerupIterator[p].symbol = graphic_powerup_bombCount;
            powerupIterator[p].type = increaseBombCount;
            powerupIterator[p].active = false;
        }

        players[p].bombArray = bombsIterator;
        bombsIterator += MAX_BOMBS_PER_PLAYER;
        powerupIterator += MAX_POWERUPS_PER_PLAYER;
    }
}

uint8_t checkPowerup(void)
{
    int r = random_int(0, 4);

    if(r == 0)
    {
        return true;
    }

    return false;

}

void addPowerup(PowerupType type, uint8_t x, uint8_t y)
{
    uint8_t p = 0;
    for( ; p < MAX_POWERUPS; p++)
    {
        if( !powerups[p].active)
        {
            powerups[p].active = true;
            powerups[p].x = x;
            powerups[p].y = y;
            powerups[p].type = type;
            
            if(type == blastRadius)
                powerups[p].symbol = graphic_powerup_blastRadius;

            else if(type == increaseBombCount)
                powerups[p].symbol = graphic_powerup_bombCount;
            break;
        }
    }
}

void help(void)
{
    Game_Printf("\r\nChoose between single player(1) and multiplayer(2) mode.\nIn singleplayer, move your bomberman to the goal (w,s,a,d) and destroy bricks with bombs (b)!"
            "\nIn multiplayer, bomb each other till one wins!\n\r"
            "Powerups will either increase your bomb range or the number of bombs you can place at a time\n\r");
}

uint8_t isCollidingPowerup(Player* player)
{
    uint8_t p = 0;
    for(; p < MAX_POWERUPS; p++)
    {
        if(powerups[p].active)
        {
            if(player->x == powerups[p].x && player->y == powerups[p].y)
            {
                    powerups[p].active = false;
                    powerupPlayer(player, powerups[p].type);
            }
        }
    }
    drawPowerups();
}

void powerupPlayer(Player* player, PowerupType type)
{
    switch(type)
    {
        case blastRadius:
            if(player->radius < MAX_RADIUS)
            {
                player->radius++;
            }
            break;

        case increaseBombCount:
            if(player->bombCount < MAX_BOMBS_PER_PLAYER)
                player->bombCount++;
            break;
    }
}

uint8_t isValidWorldCoordinate(uint8_t x, uint8_t y)
{
	if(x >= gameState.mapSizeX || y >= gameState.mapSizeY)
            return false;

	return true;
}

uint8_t isCollidingEnvironment(uint8_t x, uint8_t y)
{

    uint8_t locationSymbol;

    switch(gameState.map)
    {
        case map_2x2:
            locationSymbol = map_2_2[x][y];
            break;
        case map_3x3:
            locationSymbol = map_3_3[x][y];
            break;
        case map_4x4:
            locationSymbol = map_4_4[x][y];
            break;
        case map_5x5:
            locationSymbol = map_5_5[x][y];
            break;
    }
    //Game_CharXY(locationSymbol, 25,25);
    if (locationSymbol == graphic_indestructible || locationSymbol == graphic_brick )
        return true;
    
    return false;

}

/* OLD BOMBERMAN CODE FOR REFERENCE
uint8_t isColliding(uint8_t x, uint8_t y)
{
    uint8_t b = 0;
    uint8_t locationSymbol = map[x][y];
    if (locationSymbol == s_indestructible || locationSymbol == s_brick || locationSymbol == s_bomb)
        return true;

    //Check if we are colliding a bomb

    for( ;b < MAX_BOMBS_PER_PLAYER; b++)
    {
        //HAve we hit a bomb?
        if((player1Bombs[b].active && player1Bombs[b].x == x && player1Bombs[b].y == y))
        {
            return true;
        }

        if((player2Bombs[b].active && player2Bombs[b].x == x && player2Bombs[b].y == y))
        {
            return true;
        }

    }

    return false;
}
 */

void debug_register4Players(){
    serverHandleRegisterPlayer(MASTER);
    serverHandleRegisterPlayer(LECAKES);
    serverHandleRegisterPlayer(ALEYAN);
    serverHandleRegisterPlayer(AMRITKAR);
}

void debug_register9Players(){
    serverHandleRegisterPlayer(MASTER);
    serverHandleRegisterPlayer(LECAKES);
    serverHandleRegisterPlayer(ALEYAN);
    serverHandleRegisterPlayer(AMRITKAR);
    serverHandleRegisterPlayer(CANDELARIA);
    serverHandleRegisterPlayer(CARLUCCIO);
    serverHandleRegisterPlayer(DONOW);
    serverHandleRegisterPlayer(LECAKES_ALL);
    serverHandleRegisterPlayer(BLAZEJEWSKI);
}

void debug_register16Players(){
    serverHandleRegisterPlayer(MASTER);
    serverHandleRegisterPlayer(LECAKES);
    serverHandleRegisterPlayer(ALEYAN);
    serverHandleRegisterPlayer(AMRITKAR);
    serverHandleRegisterPlayer(CANDELARIA);
    serverHandleRegisterPlayer(CARLUCCIO);
    serverHandleRegisterPlayer(DONOW);
    serverHandleRegisterPlayer(LECAKES_ALL);
    serverHandleRegisterPlayer(BLAZEJEWSKI);
    serverHandleRegisterPlayer(HAAS);
    serverHandleRegisterPlayer(HARRIS);
    serverHandleRegisterPlayer(HENSHAW);
    serverHandleRegisterPlayer(JACOBSEN);
    serverHandleRegisterPlayer(KLODNICKI);
    serverHandleRegisterPlayer(BLAZEJEWSKI_ALL);
    serverHandleRegisterPlayer(MORRIS);
}

void debug_register25Players(){
    serverHandleRegisterPlayer(MASTER);
    serverHandleRegisterPlayer(LECAKES);
    serverHandleRegisterPlayer(ALEYAN);
    serverHandleRegisterPlayer(AMRITKAR);
    serverHandleRegisterPlayer(CANDELARIA);
    serverHandleRegisterPlayer(CARLUCCIO);
    serverHandleRegisterPlayer(DONOW);
    serverHandleRegisterPlayer(LECAKES_ALL);
    serverHandleRegisterPlayer(BLAZEJEWSKI);
    serverHandleRegisterPlayer(HAAS);
    serverHandleRegisterPlayer(HARRIS);
    serverHandleRegisterPlayer(HENSHAW);
    serverHandleRegisterPlayer(JACOBSEN);
    serverHandleRegisterPlayer(KLODNICKI);
    serverHandleRegisterPlayer(BLAZEJEWSKI_ALL);
    serverHandleRegisterPlayer(MORRIS);
    serverHandleRegisterPlayer(LABARCK);
    serverHandleRegisterPlayer(LIU);
    serverHandleRegisterPlayer(RITCHIE_III);
    serverHandleRegisterPlayer(RUPP);
    serverHandleRegisterPlayer(RUSSO);
    serverHandleRegisterPlayer(MORRIS_ALL);
    serverHandleRegisterPlayer(TRAFFORD);
    serverHandleRegisterPlayer(WHALEN);
    serverHandleRegisterPlayer(WIBLE);
    serverHandleRegisterPlayer(MACCARONE);
    serverHandleRegisterPlayer(VOTTA);
    serverHandleRegisterPlayer(TRAFFORD_ALL);
    serverHandleRegisterPlayer(MERLINO);
    serverHandleRegisterPlayer(GOODMAN);
    serverHandleRegisterPlayer(ALL_ALL);
}

void handleServerInput(char input)
{
    if(gameState.gameMode == GAMESTATE_WAITING_FOR_PLAYERS)
    {
        switch(input)
        {
            case 'n':
            case 'N':
                //Start a new game
                Game_Printf("\rServer is starting a new game with %d players.\n", gameState.numberPlayers);
                serverMessageGameStart(gameState.numberPlayers);
                serverHandleGameStart();
                break;

            case 'b':
            case 'B':
                //Broadcast to all players a request to play
                Game_Printf("\rServer is requesting players.\n");
                serverMessageRequestPlayers();
                //debug_register4Players();
                break;

            case 'r':
            case 'R':
                printRegisteredPlayers();
                break;

            case 'e':
            case 'E':
                e_addNewPlayer();
                break;
        }
    }

    else if(gameState.gameMode == GAMESTATE_GAME_PLAYING)
    {
        switch(input)
        {
            //MOVE THE CURSOR
            //Up
            case 'w':
            case'W':
                //Check move
                //
                break;

            //Down
            case 's':
            case'S':
                //Check move
                break;

            //Left
            case 'a':
            case'A':
                //Check move
                break;

            //Right
            case 'd':
            case'D':
                //Check move
                break;

            case ' ':
                break;
                
            default:
                e_moveClient1(input);
                e_moveClient2(input);
        }
    }
}

void handleClientInput(char input)
{
    if(gameState.gameMode == GAMESTATE_GAME_PLAYING)
    {
        switch(input){
            //Up
            case 'w':
            case'W':
                //Check move
                if(clientValidateMove(MOVE_UP))
                    clientMessageMove(MOVE_UP);
                break;

            //Down
            case 's':
            case'S':
                //Check move
                if(clientValidateMove(MOVE_DOWN))
                    clientMessageMove(MOVE_DOWN);
                break;

            //Left
            case 'a':
            case'A':
                //Check move
                if(clientValidateMove(MOVE_LEFT))
                    clientMessageMove(MOVE_LEFT);
                break;

            //Right
            case 'd':
            case'D':
                //Check move
                if(clientValidateMove(MOVE_RIGHT))
                    clientMessageMove(MOVE_RIGHT);
                break;

            case ' ':
                if(clientValidatePlaceBomb())
                    clientMessagePlaceBomb();
                break;
        }
    }
}

void drawMap(void)
{
    switch(gameState.map)
    {
        case map_2x2:
            graphics_draw2x2Map();
            break;
        case map_3x3:
            graphics_draw3x3Map();
            break;
        case map_4x4:
            graphics_draw4x4Map();
            break;
        case map_5x5:
            graphics_draw5x5Map();
            break;
    }      
}

void clearPlayer(Player* player)
{
    Game_CharXY(' ', player->x, player->y);
}

void drawPlayerUnderneath(Player* player)
{
    Game_CharXY(player->underneath, player->x, player->y);
}



/*
void drawBombs()
{
    Game_SetColor(ForegroundRed);
    uint8_t b = 0;
    for( ; b < MAX_BOMBS_PER_PLAYER; b++)
    {
        if(player1Bombs[b].active)
        {
            Game_CharXY(player1Bombs[b].symbol, player1Bombs[b].x, player1Bombs[b].y);
        }

         if(player2Bombs[b].active)
        {
            Game_CharXY(player2Bombs[b].symbol, player2Bombs[b].x, player2Bombs[b].y);
        }

    }
}
 */

/*
void placeBomb(Player* player)
{
    if( isValidCoordinate(player1.x, player1.y) && !isColliding(player1.x, player1.y)){
        if(GAMEMODE == multiPlayer){
            if( isValidCoordinate(player2.x, player2.y) && !isColliding(player2.x, player2.y)){
                //Find available bomb
                uint8_t b = 0;
                for( ; b < player->bombCount; b++)
                {
                    if( !player->bombArray[b].active)
                    {
                        player->bombArray[b].active = true;
                        player->bombArray[b].x = player->x;
                        player->bombArray[b].y = player->y;
                        player->bombArray[b].blastSize = player->radius;
                        //typecast to task_fn_t for CCS
                        Task_Schedule(explodeBomb, &(player->bombArray[b]), player->bombArray[b].duration, 0);
                        break;
                    }
                }
            }
        }
        else{
            //Find available bomb
            uint8_t b = 0;
            for( ; b < player->bombCount; b++)
            {
                if( !player->bombArray[b].active)
                {
                    player->bombArray[b].active = true;
                    player->bombArray[b].x = player->x;
                    player->bombArray[b].y = player->y;
                    player->bombArray[b].blastSize = player->radius;
                    //typecast to task_fn_t for CCS
                    Task_Schedule(explodeBomb, &(player->bombArray[b]), player->bombArray[b].duration, 0);
                    break;
                }
            }
        }

    }
}

 * */
void explodeBomb(void* bomb)
{

    Bomb* b = (Bomb*) bomb;
    //Clear the location of the bomb
    Game_CharXY(graphic_clear,b->x, b->y);
    //Deactivate the bomb to stop future drawing
    b->active = false;
    Game_Bell();
    //checkExplosion(b);
}

void refreshScreen()
{
}

/*
void checkExplosion(void* bomb)
{

    Bomb* b = (Bomb*) bomb;
    //If we hit a block go no further and see if it is destrutible
    //If we hit a player continue until we can go no further

    uint8_t i = 0;

    //Check North
    for(;i < b->blastSize;i++){

        uint8_t x = b->x;
        uint8_t y = b->y - i;

        //indestructibles stop fire progress
        if(map[x][y] == s_indestructible)
            break;

        //bricks turn to blanks and stop fire progress
        if(map[x][y] == s_brick){
            map[x][y] = s_blank;
            Game_CharXY(s_fire, x, y);

            //See if we should add a powerup
            if(checkPowerup())
            {
                addPowerup(getRandomPowerup(),x,y);
            }

            break;
        }
           
        //Player 1 is hit
        if(x == player1.x && y == player1.y){

            //Player 2 was also hit and both lose
            if(x == player2.x && y == player2.y){
                gameOver(&player1, draw);
                gameOver(&player2, draw);
            }

            else{
                gameOver(&player1, lose);
                gameOver(&player2, win);
            }
        }

        //Player 2 is hit
        else if(x == player2.x && y == player2.y){
                gameOver(&player2, lose);
                gameOver(&player1, win);
        }
        Game_SetColor(ForegroundRed);
        Game_CharXY(s_fire, x, y);
    }
    

    i = 0;

    //Check South
    for(;i < b->blastSize;i++){

        uint8_t x = b->x;
        uint8_t y = b->y + i;

        //indestructibles stop fire progress
        if(map[x][y] == s_indestructible)
            break;

        //bricks turn to blanks and stop fire progress
        if(map[x][y] == s_brick){
            map[x][y] = s_blank;
            Game_CharXY(s_fire, x, y);
            //See if we should add a powerup
            if(checkPowerup())
            {
                addPowerup(getRandomPowerup(),x,y);
            }
            break;
        }

        //Player 1 is hit
        if(x == player1.x && y == player1.y){

            //Player 2 was also hit and both lose
            if(x == player2.x && y == player2.y){
                gameOver(&player1, draw);
                gameOver(&player2, draw);
            }

            else{
                gameOver(&player1, lose);
                gameOver(&player2, win);
            }
        }

        //Player 2 is hit
        else if(x == player2.x && y == player2.y){
                gameOver(&player2, lose);
                gameOver(&player1, win);
        }
        Game_SetColor(ForegroundRed);
        Game_CharXY(s_fire, x, y);

    }

    i=0;
    //Check East
    for(;i < b->blastSize;i++){

        uint8_t x = b->x + i;
        uint8_t y = b->y;

        //indestructibles stop fire progress
        if(map[x][y] == s_indestructible)
            break;

        //bricks turn to blanks and stop fire progress
        if(map[x][y] == s_brick){
            map[x][y] = s_blank;
            Game_CharXY(s_fire, x, y);
            //See if we should add a powerup
            if(checkPowerup())
            {
                addPowerup(getRandomPowerup(),x,y);
            }
            break;
        }
           
        //Player 1 is hit
        if(x == player1.x && y == player1.y){

            //Player 2 was also hit and both lose
            if(x == player2.x && y == player2.y){
                gameOver(&player1, draw);
                gameOver(&player2, draw);
            }

            else{
                gameOver(&player1, lose);
                gameOver(&player2, win);
            }
        }

        //Player 2 is hit
        else if(x == player2.x && y == player2.y){
                gameOver(&player2, lose);
                gameOver(&player1, win);
        }
        Game_SetColor(ForegroundRed);
        Game_CharXY(s_fire, x, y);

    }

    i=0;
    //Check West
    for(;i < b->blastSize;i++){

        uint8_t x = b->x - i;
        uint8_t y = b->y;

        //indestructibles stop fire progress
        if(map[x][y] == s_indestructible)
            break;

        //bricks turn to blanks and stop fire progress
        if(map[x][y] == s_brick){
            map[x][y] = s_blank;
            Game_CharXY(s_fire, x, y);
            //See if we should add a powerup
            if(checkPowerup())
            {
                addPowerup(getRandomPowerup(),x,y);
           }
            break;
        }

        //Player 1 is hit
        if(x == player1.x && y == player1.y){

            //Player 2 was also hit and both lose
            if(x == player2.x && y == player2.y){
                gameOver(&player1, draw);
                gameOver(&player2, draw);
            }

            else{
                gameOver(&player1, lose);
                gameOver(&player2, win);
            }
        }

        //Player 2 is hit
        else if(x == player2.x && y == player2.y){
                gameOver(&player2, lose);
                gameOver(&player1, win);
        }
        Game_SetColor(ForegroundRed);
        Game_CharXY(s_fire, x, y);
    }
    Task_Schedule(refreshScreen, 0, 500, 0);

}
 * */


void gameOver(Player* player, WinState winState)
{
    /*
    Game_CharXY('\r', 0, LEVEL_MAX_Y + 1);
    Game_Printf("Game Over!\n\r");

    if(player == &player1)
    {
        switch(winState){
            case(win):
                Game_SetColor( BackgroundWhite);
                Game_SetColor( ForegroundBlue);
                Game_Player1Printf("You Won!\n\r");
                break;
            case(lose):
                Game_SetColor( BackgroundRed);
                Game_SetColor( ForegroundYellow);
                Game_Player1Printf("You Lost!\n\r");
                break;
            case(draw):
                Game_SetColor( BackgroundRed);
                Game_SetColor( ForegroundYellow);
                Game_Player1Printf("DRAW!\n\r");
                break;
        }
    }

    else if(player == &player2)
    {
        switch(winState){
            case(win):
                Game_SetColor( BackgroundWhite);
                Game_SetColor( ForegroundBlue);
                Game_Player2Printf("You Won!\n\r");
                break;
            case(lose):
                Game_SetColor( BackgroundRed);
                Game_SetColor( ForegroundYellow);
                Game_Player2Printf("You Lost!\n\r");
                break;
            case(draw):
                Game_SetColor( BackgroundRed);
                Game_SetColor( ForegroundYellow);
                Game_Player2Printf("DRAW!\n\r");
                break;
        }
    }
    Game_SetColor( ForegroundWhite);
    Game_SetColor( BackgroundBlack);
    Game_ShowCursor();
     */
}


uint8_t getRandomPowerup(void)
{
    int r = random_int(0, 1);
    return r;
}

void drawPowerups()
{
    Game_SetColor(ForegroundCyan);
    uint8_t p = 0;
    for( ; p < MAX_POWERUPS; p++)
    {
        if(powerups[p].active)
        {

            Game_CharXY(powerups[p].symbol, powerups[p].x, powerups[p].y);
        }
    }
}

void printRegisteredPlayers(void)
{
    Game_ClearScreen();
    Game_CharXY(' ',0,0);
    Game_Printf("\rRegistered Players\n");
    uint8_t i = 0;
    //Iterate over every valid player in the game
    for( ; i < MAX_PLAYERS ; i++ )
    {   
        Game_Printf("\rPlayer Name: %s", getName(players[i].address));
        Game_Printf(" : Player Address: %d\n", players[i].address);
    }
}

void serverMessageHandler(uint8_t* data, uint8_t length, uint8_t from)
{
    //The first byte of the messsage is the sub-message, identifying what we are receiving

    uint8_t message = *data++;
    uint8_t playerIndex;
    uint8_t direction;

    switch (gameState.gameMode)
    {
        case GAMESTATE_WAITING_FOR_PLAYERS:

            switch(message)
            {
                case CLIENT_REGISTER_PLAYER:
                    serverHandleRegisterPlayer(from);
                    break;
            }
        break;

        case GAMESTATE_GAME_PLAYING:
            switch(message)
            {
                case CLIENT_PLACE_BOMB:
                    playerIndex = *data++;
                    serverHandlePlaceBomb(playerIndex);
                    break;

                case CLIENT_MOVE:
                    playerIndex = *data++;
                    direction = *data++;
                    serverHandleMovePlayer(playerIndex, direction);
                    break;
            }
        break;
    }
}

void clientMessageHandler(uint8_t* data, uint8_t length, uint8_t from)
{
    //The first byte of the messsage is the sub-message, identifying what we are receiving

    uint8_t message = *data++;

    switch(gameState.gameMode)
    {
        case GAMESTATE_WAITING_FOR_PLAYERS:

            switch(message)
            {
                case SERVER_REQUEST_PLAYERS:
                    clientMessageRegisterPlayer();
                    printRegisteredPlayers();
                    break;
                case SERVER_SET_PLAYER:;
                    //retreive our player number
                    uint8_t playerNumber = *data++;
                    clientRegisterPlayer(playerNumber);
                    break;
                case SERVER_GAME_START:;
                    uint8_t numberOfPlayers = *data++;
                    clientHandleGameStart(numberOfPlayers);
                    break;
            }
            break;

        case GAMESTATE_GAME_PLAYING:
        case GAMESTATE_GAME_SPECTATE:;

            uint8_t x;
            uint8_t y;
            uint8_t playerIndex;
            uint8_t powerupType;
            uint8_t blastRadius;
            uint8_t direction;

            switch(message)
            {
                case SERVER_PLACE_BOMB:;
                    x = *data++;
                    y = *data++;
                    clientHandlePlaceBomb(x, y);
                    break;
                case SERVER_EXPLODE_BOMB:;
                    x = *data++;
                    y = *data++;
                    blastRadius = *data++;
                    clientHandleExplodeBomb(x, y, blastRadius);
                    break;
                case SERVER_MOVE_PLAYER:;
                    playerIndex = *data++;
                    direction = *data++;
                    clientHandleMovePlayer(playerIndex, direction);
                    break;
                case SERVER_KILL_PLAYER:;
                    playerIndex= *data++;
                    clientHandleKillPlayer(playerIndex);
                    break;
                case SERVER_DESTROY_BLOCK:;
                    x = *data++;
                    y = *data++;
                    clientHandleDestroyBlock(x,y);
                    break;
                case SERVER_PLACE_POWERUP:;
                    powerupType = *data++;
                    x = *data++;
                    y = *data++;
                    clientHandlePlacePowerup(powerupType, x, y);
                    break;
                case SERVER_POWERUP_PLAYER:;
                    powerupType = *data++;
                    clientHandlePowerupPlayer(powerupType);
                    break;
                case SERVER_GAME_OVER:;
                    playerIndex = *data++;
                    clientHandleGameOver(playerIndex);
                    break;
                case SERVER_REMOVE_POWERUP:;
                    x = *data++;
                    y = *data++;
                    clientHandleRemovePowerup(x,y);
                    break;
            }
            break;
    }
}

void serverHandleRegisterPlayer(uint8_t address){
    uint8_t p = 0;
    //Iterate through every player and find the next active one
    //If none is found, return false
    for( ; p < MAX_PLAYERS; p++)
    {
        if(!players[p].active){
            players[p].address = address;
            players[p].active = true;
            serverMessageSetPlayer(address, p);
            gameState.numberPlayers++;
            printRegisteredPlayers();
            break;
        }
    }
 }

void serverHandleMovePlayer(uint8_t playerIndex, uint8_t direction)
{
    uint8_t x = players[playerIndex].x;
    uint8_t y = players[playerIndex].y;

    Game_CharXY(' ', 25, 25);
    Game_Printf("%d,%d",x,y);

    switch(direction)
    {
        case MOVE_UP:
            y--;
            break;
        case MOVE_DOWN:
            y++;
            break;
        case MOVE_LEFT:
            x--;
            break;
        case MOVE_RIGHT:
            x++;
            break;
    }
    Game_CharXY(' ', 25, 26);
    Game_Printf("%d,%d",x,y);
    Game_CharXY(' ', 25, 27);
    Game_Printf("Index:%d",playerIndex);
    if(isValidWorldCoordinate(x,y))
    {
        if(!isCollidingEnvironment(x,y))
        {
            Game_CharXY(graphic_clear, players[playerIndex].x, players[playerIndex].y);
            players[playerIndex].x = x;
            players[playerIndex].y = y;
            serverMessageMovePlayer(playerIndex, direction);
            graphics_drawPlayers();

        }
    }
}

void serverHandlePlaceBomb(uint8_t playerIndex)
{

    uint8_t bombIndexStart = playerIndex * MAX_BOMBS_PER_PLAYER;

    uint8_t i = 0;

    uint8_t bombPlaced = 0;

    for( ; i < players[playerIndex].bombCount; i++)
    {
        if(!bombs[bombIndexStart+i].active)
        {
            bombs[bombIndexStart+i].active = true;
            bombs[bombIndexStart+i].x = players[playerIndex].x;
            bombs[bombIndexStart+i].y = players[playerIndex].y;
            bombs[bombIndexStart+i].blastSize = players[playerIndex].radius;
            bombPlaced = 1;
            break;
        }
    }

    if(bombPlaced)
        serverMessagePlaceBomb(players[playerIndex].x, players[playerIndex].y);

}

void clientRegisterPlayer(uint8_t playerIndex)
{
    gameState.playerIndex = playerIndex;
}

void clientHandleGameStart(uint8_t numberOfPlayers)
{
    Game_HideCursor();
    gameState.gameMode = GAMESTATE_GAME_PLAYING;
    gameState.numberPlayers = numberOfPlayers;
    calculateMapSize();
    Game_ClearScreen();
    drawMap();
    graphics_drawPlayers();
}

void clientHandlePlaceBomb(uint8_t x, uint8_t y)
{
    Game_CharXY(graphic_bomb, x, y);
}

void clientHandleExplodeBomb(uint8_t x, uint8_t y, uint8_t blastRadius)
{
    switch(gameState.map)
    {
        case map_2x2:
            graphics_burn2x2(x, y, blastRadius);
            break;
        case map_3x3:
            graphics_burn3x3(x, y, blastRadius);
            break;
        case map_4x4:
            graphics_burn4x4(x, y, blastRadius);
            break;
        case map_5x5:
            graphics_burn5x5(x, y, blastRadius);
            break;
    }
}

void clientHandleMovePlayer(uint8_t playerIndex, uint8_t direction)
{

    Game_CharXY(graphic_clear, players[playerIndex].x, players[playerIndex].y);

    switch(direction)
    {
        case MOVE_UP:
            players[playerIndex].y--;
            break;
        case MOVE_DOWN:
            players[playerIndex].y++;
            break;
        case MOVE_LEFT:
            players[playerIndex].x++;
            break;
        case MOVE_RIGHT:
            players[playerIndex].x--;
            break;
    }

    graphics_drawPlayers();

    //Redraw all players
}

void clientHandleKillPlayer(uint8_t playerIndex)
{
    players[playerIndex].active = false;

    if(gameState.playerIndex == playerIndex)
    {
        //draw game over
        gameState.gameMode = GAMESTATE_GAME_SPECTATE;
    }
    graphics_drawYouHaveDied(0,30);
}

void clientHandleDestroyBlock(uint8_t x, uint8_t y)
{
    switch(gameState.map)
    {
        case map_2x2:
            map_2_2[x][y] = graphic_clear;
            graphics_drawClear(x,y);
            break;
        case map_3x3:
            map_3_3[x][y] = graphic_clear;
            graphics_drawClear(x,y);
            break;
        case map_4x4:
            map_4_4[x][y] = graphic_clear;
            graphics_drawClear(x,y);
            break;
        case map_5x5:
            map_5_5[x][y] = graphic_clear;
            graphics_drawClear(x,y);
            break;
    }
}

void clientHandlePlacePowerup(uint8_t powerupType, uint8_t x, uint8_t y)
{
    switch(gameState.map)
    {
        case map_2x2:
            switch(powerupType)
            {
                case blastRadius:
                    map_2_2[x][y] = graphic_powerup_blastRadius;
                    break;
                case increaseBombCount:
                    map_2_2[x][y] = graphic_powerup_bombCount;
                    break;
            }
            graphics_drawPowerup(powerupType, x,y);
            break;
            
        case map_3x3:
            switch(powerupType)
            {
                case blastRadius:
                    map_3_3[x][y] = graphic_powerup_blastRadius;
                    break;
                case increaseBombCount:
                    map_3_3[x][y] = graphic_powerup_bombCount;
                    break;
            }
            graphics_drawPowerup(powerupType, x,y);
            break;

        case map_4x4:
               switch(powerupType)
            {
                case blastRadius:
                    map_4_4[x][y] = graphic_powerup_blastRadius;
                    break;
                case increaseBombCount:
                    map_4_4[x][y] = graphic_powerup_bombCount;
                    break;
            }
            graphics_drawPowerup(powerupType, x,y);
            break;

        case map_5x5:
            switch(powerupType)
            {
                case blastRadius:
                    map_5_5[x][y] = graphic_powerup_blastRadius;
                    break;
                case increaseBombCount:
                    map_5_5[x][y] = graphic_powerup_bombCount;
                    break;
            }
            graphics_drawPowerup(powerupType, x,y);
            break;
    }
}

void clientHandleGameOver(uint8_t winningPlayerIndex)
{
    //Display game over screen
    //Write winner below
    Game_SetColor( ForegroundWhite);
    Game_SetColor( BackgroundBlack);

    if(winningPlayerIndex == gameState.playerIndex)
        graphics_drawYouWin(0,30);
    else
        graphics_drawYouLose(0,30);

    Game_ShowCursor();
}

void clientHandleRemovePowerup(uint8_t x, uint8_t y)
{
    Game_CharXY(' ' , x, y);
}

void clientIncreaseBombCount()
{
    uint8_t temp = players[gameState.playerIndex].bombCount++;
    if(temp > MAX_BOMBS_PER_PLAYER)
        return;

    players[gameState.playerIndex].bombCount = temp;
}

void clientIncreaseBombRadius()
{
    uint8_t temp = players[gameState.playerIndex].bombCount++;
    if(temp > MAX_BOMBS_PER_PLAYER)
        return;

    players[gameState.playerIndex].bombCount = temp;
}

void clientHandlePowerupPlayer( uint8_t powerupType)
{
    switch(powerupType)
    {
        case blastRadius:
            clientIncreaseBombRadius();
            break;

        case increaseBombCount:
            clientIncreaseBombCount();
            break;
    }
}

void serverHandleGameStart()
{
    gameState.gameMode = GAMESTATE_GAME_PLAYING;
    calculateMapSize();
    Game_ClearScreen();
    drawMap();
    graphics_drawPlayers();
}

void serverIncreaseBombCount( uint8_t playerIndex)
{
    uint8_t temp = players[playerIndex].bombCount++;
    if(temp > MAX_BOMBS_PER_PLAYER)
        return;
    
    players[playerIndex].bombCount = temp;
}

void serverIncreaseBombRadius( uint8_t playerIndex)
{
    uint8_t temp = players[playerIndex].bombCount++;
    if(temp > MAX_BOMBS_PER_PLAYER)
        return;

    players[playerIndex].bombCount = temp;
}

void serverPowerupPlayer(uint8_t playerIndex, uint8_t powerupType)
{
    switch(powerupType)
    {
        case blastRadius:
            serverIncreaseBombRadius(playerIndex);
            break;

        case increaseBombCount:
            serverIncreaseBombCount(playerIndex);
            break;
    }
}

void serverHandlePlayerOnItem(uint8_t playerIndex)
{
    //Look at player's location and see if there is a powerup on it
    uint8_t x = players[gameState.playerIndex].x;
    uint8_t y = players[gameState.playerIndex].y;

    int i = 0;

    for( ; i < MAX_POWERUPS; i++)
    {
        if(powerups[i].active)
        {
            if( x == powerups[i].x && y == powerups[i].y)
            {
                serverPowerupPlayer(playerIndex, powerups[i].type);
                serverMessagePowerupPlayer(players[playerIndex].address, powerups[i].type);
                powerups[i].active = false;
                serverMessageRemovePowerup(x,y);
            }
        }
    }
}

uint8_t clientValidateMove(uint8_t direction)
{
    uint8_t x = players[gameState.playerIndex].x;
    uint8_t y = players[gameState.playerIndex].y;

    switch(direction)
    {
        case MOVE_UP:
            y -= 1;
            break;
        case MOVE_DOWN:
            y += 1;
            break;
        case MOVE_LEFT:
            x -= 1;
            break;
        case MOVE_RIGHT:
            x += 1;
            break;
        case MOVE_NONE:
            break;
        default:
            Game_Printf("\nUnknown direction passed into clientValidateMove.\n");
    }

    //Clients can only place bombs at their location
    if( isValidWorldCoordinate(x, y) && !isCollidingEnvironment(x,y))
    {
        return true;
    }
    return false;

}

uint8_t clientValidatePlaceBomb()
{
    //Clients can only place bombs at their location
    uint8_t x = players[gameState.playerIndex].x;
    uint8_t y = players[gameState.playerIndex].y;

    if(clientValidateMove(MOVE_NONE))
        return true;

    return false;
}

void serverMessageSetPlayer(uint8_t address, uint8_t playerIndex)
{
    uint8_t data[2] = {SERVER_SET_PLAYER, playerIndex};
    nrf24_SendMsg(address, BOMBERMAN_MSG, data, 2);
}

void serverMessageRequestPlayers()
{
    uint8_t data[1] = {SERVER_REQUEST_PLAYERS};

    nrf24_SendMsg(ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    1);
}

void serverMessageGameStart(uint8_t numberOfPlayers)
{
    uint8_t data[2] = {SERVER_GAME_START, numberOfPlayers};

    nrf24_SendMsg(ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    2);
}

void serverMessagePlaceBomb( uint8_t x, uint8_t y)
{
    uint8_t data[3] = {SERVER_PLACE_BOMB, x, y};

    nrf24_SendMsg(  ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    3);
}

void serverMessageExplodeBomb( uint8_t x, uint8_t y, uint8_t blastSize)
{
    uint8_t data[4] = {SERVER_EXPLODE_BOMB, x, y, blastSize};

    nrf24_SendMsg(  ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    4);
}

void serverMessageMovePlayer( uint8_t playerIndex, uint8_t direction)
{
    uint8_t data[3] = {SERVER_MOVE_PLAYER, playerIndex, direction};

    nrf24_SendMsg(  ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    3);
}

void serverMessageKillPlayer( uint8_t playerIndex)
{
    uint8_t data[2] = {SERVER_KILL_PLAYER, playerIndex};

    nrf24_SendMsg(  ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    2);
}

void serverMessageDestroyBlock( uint8_t x, uint8_t y)
{
    uint8_t data[3] = {SERVER_DESTROY_BLOCK, x, y};

    nrf24_SendMsg(  ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    3);
}

void serverMessagePlacePowerup( uint8_t type, uint8_t x, uint8_t y)
{
    uint8_t data[4] = {SERVER_PLACE_POWERUP, type, x, y};

    nrf24_SendMsg(  ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    4);
}

void serverMessagePowerupPlayer(uint8_t address, uint8_t type)
{
    uint8_t data[2] = {SERVER_POWERUP_PLAYER, type};

    nrf24_SendMsg(  address,
                    BOMBERMAN_MSG,
                    data,
                    2);
}

void serverMessageGameOver(uint8_t playerIndex)
{
    uint8_t data[2] = {SERVER_GAME_OVER, playerIndex};

    nrf24_SendMsg(ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    2);
}

void serverMessageRemovePowerup(uint8_t x, uint8_t y)
{
    uint8_t data[3] = {SERVER_REMOVE_POWERUP, x, y};
    nrf24_SendMsg(ALL_ALL,
                    BOMBERMAN_MSG,
                    data,
                    3);
}

void clientMessageRegisterPlayer()
{
    uint8_t data[2] = {CLIENT_REGISTER_PLAYER};

    nrf24_SendMsg(  LECAKES,
                    BOMBERMAN_MSG,
                    data,
                    2);
}

void clientMessagePlaceBomb()
{
    //Clients can only place bombs at their location
    uint8_t x = players[gameState.playerIndex].x;
    uint8_t y = players[gameState.playerIndex].y;

    uint8_t data[3] = {CLIENT_PLACE_BOMB, x, y};

    nrf24_SendMsg(LECAKES,
                    BOMBERMAN_MSG,
                    data,
                    3);
}

void clientMessageMove( uint8_t direction)
{
    uint8_t data[2] = {CLIENT_MOVE, direction};

    nrf24_SendMsg(  LECAKES,
                    BOMBERMAN_MSG,
                    data,
                    2);
}


void e_clientMessageRegisterPlayer(uint8_t playerAddress)
{
    uint8_t data[1] = {CLIENT_REGISTER_PLAYER};
    serverMessageHandler(data, 1, playerAddress);
}

void e_clientMessagePlaceBomb(uint8_t playerAddress)
{
    uint8_t data[1] = {CLIENT_PLACE_BOMB};
    serverMessageHandler(data, 1, playerAddress);
}

void e_clientMessageMove( uint8_t playerAddress, uint8_t playerIndex, uint8_t direction)
{
    uint8_t data[3] = {CLIENT_MOVE, playerIndex, direction};
    serverMessageHandler(data, 3, playerAddress);
}

void e_addNewPlayer()
{
    static uint8_t i = 0;
    //Each time this function is called it adds the next player
    serverHandleRegisterPlayer(LECAKES + i);
    i++;
}

void e_moveClient1(char key)
{
    switch(key)
    {
        case '1':
            e_clientMessageMove(LECAKES, 0, MOVE_UP);
            break;
        case '2':
            e_clientMessageMove(LECAKES, 0, MOVE_DOWN);
            break;
        case '3':
            e_clientMessageMove(LECAKES, 0, MOVE_LEFT);
            break;
        case '4':
            e_clientMessageMove(LECAKES, 0, MOVE_RIGHT);
            break;

    }
}

void e_moveClient2(char key)
{
    switch(key)
    {
        case '5':
            e_clientMessageMove(ALEYAN, 1, MOVE_UP);
            break;
        case '6':
            e_clientMessageMove(ALEYAN, 1, MOVE_DOWN);
            break;
        case '7':
            e_clientMessageMove(ALEYAN, 1, MOVE_LEFT);
            break;
        case '8':
            e_clientMessageMove(ALEYAN, 1, MOVE_RIGHT);
            break;

    }
}
