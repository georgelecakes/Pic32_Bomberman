/* 
 * File:   bomberman_gamestate.h
 * Author: George
 *
 * Created on April 24, 2015, 9:34 PM
 */

#ifndef BOMBERMAN_GAMESTATE_H
#define	BOMBERMAN_GAMESTATE_H

#include <stdint.h>

//Maximums
#define MAX_PLAYERS 25
//Is meaningless, just keeps from having too many powerups on the screen
#define MAX_POWERUPS_PER_PLAYER 2
//Restricts the max number of powerups on the screen as 50
#define MAX_POWERUPS MAX_PLAYERS * MAX_POWERUPS_PER_PLAYER
#define MAX_RADIUS 5
#define MAX_BOMBS_PER_PLAYER 5

/*!
 * The state of the game, including the number of players in the session
 */

typedef struct {
    uint8_t numberPlayers;
    uint8_t map;
    uint8_t mapSizeX;
    uint8_t mapSizeY;
    uint8_t gameMode;
    uint8_t role;
    uint8_t playerIndex;
}GameState;

/*!
 * @enum WinState
 * @brief Used to define if the player won, lost or tied
 */
typedef enum {
    lose,   /*!< A value of lost*/
    win,    /*!< A value of won*/
    draw    /*!< A value of draw*/
}WinState;

/*!
 * @enum PowerupType
 * @brief The types of powerups available in the game
 */
typedef enum{
    blastRadius = 0,
    increaseBombCount
} PowerupType;

/*!
 * @struct Powerup_s
 * @brief A powerup used in the game to increase a players power.
 */
struct Powerup_s{
    uint16_t x;         /*!< The x coordinate of the powerup.*/
    uint16_t y;         /*!< The y coordinate of the powerup.*/
    uint8_t symbol;     /*!< The symbol for the powerup to display onscreen.*/
    PowerupType type;   /*!< The type of powerup, which increases the player's ability in different ways.*/
    uint8_t active;     /*!< Whether the powerup is currently active on screen.*/
};

typedef struct Powerup_s Powerup;

/*!
 * @struct Bomb_s
 * @brief Bombs are created by players to destroy areas of the board.
 */

struct Bomb_s{
	uint16_t x;         /*!< The x coordinate of the bomb.*/
	uint16_t y;         /*!< The y coordinate of the bomb.*/
        uint8_t symbol;     /*!< The visual associated with a bomb.*/
	uint8_t blastSize;  /*!< How far out from the center the bomb emits fire.*/
	uint16_t duration;  /*!< How long before the bomb explodes.*/
        uint8_t active;     /*!< Whether the bomb is active and on the board or not.*/
};

typedef struct Bomb_s Bomb;

/*!
 * @struct Player_s
 * @brief Represents a player.
 */

struct Player_s{
        uint8_t address;    /*!< The network address for this player*/
        uint8_t name[4];       /*!< A 3 character name every player can have*/
	uint16_t x;         /*!< The x coordinate of the bomb.*/
	uint16_t y;         /*!< The y coordinate of the bomb.*/
        uint8_t symbol;     /*!< The visual representation of the player.*/
        uint8_t underneath; /*!< What was under the player. May no longer be necessary.*/
        Bomb* bombArray;    /*!< Pointer to the player's bomb array.*/
        uint8_t color;      /*!< The color of the player.*/
        uint8_t radius;     /*!< The distance out a player's bombs fire.*/
        uint8_t bombCount;  /*!< The number of concurrent bombs the player can have on the board at any one time.*/
        uint8_t active;     /*!< Whether this player is currently active or not*/
};

typedef struct Player_s Player;


Player players[MAX_PLAYERS];
Bomb bombs[MAX_PLAYERS * MAX_BOMBS_PER_PLAYER];
Powerup powerups[MAX_POWERUPS];
GameState gameState;
uint8_t GAMEID;

#endif	/* BOMBERMAN_GAMESTATE_H */

