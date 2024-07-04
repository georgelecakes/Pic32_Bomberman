/*! @mainpage Bomberman Multiplayer
 *
 * This is meant to be a multiplayer bomberman game where
 * up to 25 players can compete for the title of bombest man.
 *
 * Left Off:
 * in setupPlayers need to setup every two bombs for each player
 */

/*! @file bomberman Bomberman Multiplayer
 * @addtogroup bomberman Bomberman Multiplayer
 * @author George Lecakes
 * @brief Bomberman multiplayer implementation for 2 - 25 players
 *
 * Created on March 20, 2015, 2:20 PM
 * @{
 */

#ifndef BOMBERMAN_H
#define	BOMBERMAN_H

#define BOMBERMAN_ROLE SERVER_BOMBERMAN

#ifndef BOMBERMAN_ROLE
//#error Must define BOMBERMAN_ROLE as 0 for server or 1 for client
#endif

#include <stdint.h>
#include <string.h>

//#include "system.h"

//#include "terminal.h"
//#include "random_int.h"

#include "bomberman_map.h"
#include "bomberman_graphics.h"
#include "bomberman_messages.h"
#include "bomberman_networking.h"
#include "bomberman_gamestate.h"

#define true 1
#define false 0
#define null 0

/*!
 * @brief Initialize the game
 */
void bomberManInit(void);

/*!
 * @brief Issues instructions for the start screen.
 */
void prePlay(void);

/*!
 * @brief Provides player help
 * void method meant to be used by the game module to provide help to the user.
 */
static void help(void);

/*!
 * @brief setup all players in the array
 */
static void setupPlayers(void);

/*!
 * @brief Initializes the game for playing.
 */
static void play(void);

/*!
 * @brief Checks to see if the player is colliding any of the active powerups
 */
static uint8_t isCollidingPowerup(Player* player);

static void handleServerInput(char input);

static void handleClientInput(char input);

/*!
 * @brief Clear the location of the player on the map.
 * @param player Pointer to the player to clean
 */
static void clearPlayer(Player* player);



/*!
 * @brief Draws the character stored underneath the player to the player's current position.
 * @param player pointer to the player to draw the underneath graphic
 */
static void drawPlayerUnderneath(Player* player);

/*!
 * @brief Called by the game manager to invoke an explosion of a bomb
 * @param bomb
 */
static void explodeBomb(void* bomb);

/*!
 * @brief Redraws elements, meant for after a bomb explodes.
 */
static void refreshScreen();


/*!
 * @brief writes game over to the player and releases them from the game.
 * @param player
 * @param winState
 */
static void gameOver(Player* player, WinState winState);


/*!
 * @brief Applies a powerup to a player
 * @param player A pointer to a player to powerup
 * @param type The type of powerup to apply
 */
static void powerupPlayer(Player* player, PowerupType type);

/*!
 * @brief See if a powerup should go there based on random_int.
 * Powerups have a 20% chance of popping up after a brick is destroyed
 * @return true(1) or false(0) indicating that a powerup should be generated.
 */
static uint8_t checkPowerup(void);

/*!
 * @brief Checks if there are any avaialble powerup spots, activates it and adds it to the specified location
 * @param type The type of powerup to add.
 * @param x The horizontal location to add the powerup.
 * @param y The vertical location to add the powerup.
 */
static void addPowerup(PowerupType type, uint8_t x, uint8_t y);

/*!
 * @brief returns a random powerup
 * @return The enum value of the powerup
 */
static uint8_t getRandomPowerup(void);

/*!
 * @brief draws all active powerups to the screen
 */

static void drawPowerups(void);

static void printRegisteredPlayers(void);



static void clientMessageHandler(uint8_t* data, uint8_t length, uint8_t from);
static void serverMessageHandler(uint8_t* data, uint8_t length, uint8_t from);



/*!
*@brief Makes sure we entered in a valid x and y coordinate within the world
*/
static uint8_t isValidWorldCoordinate(uint8_t x, uint8_t y);
/*!
*@brief Makes sure we are not colliding bricks or bombs on the map
*/
static uint8_t isCollidingEnvironment(uint8_t x, uint8_t y);

//GENERIC METHODS
static void setMapSize();
static void drawMap();

static void calculateMapSize();

//SERVER METHODS
static void serverStartUp();

static void serverHandleGameStart();

static void serverIncreaseBombCount(uint8_t playerIndex);
static void serverIncreaseBombRadius(uint8_t playerIndex);
static void serverPowerupPlayer(uint8_t playerIndex, uint8_t powerupType);
static void serverHandlePlayerOnItem(uint8_t playerIndex);


//NEED TO BE IMPLEMENTED
static void serverHandleRegisterPlayer(uint8_t address);
static void serverHandleMovePlayer(uint8_t playerIndex, uint8_t direction);
static void serverHandlePlaceBomb(uint8_t playerIndex);

//CLIENT METHODS
static void clientStartUp();
static void clientHandleGameStart(uint8_t numberOfPlayers);
static void clientHandlePlaceBomb(uint8_t x, uint8_t y);
static void clientHandleExplodeBomb(uint8_t x, uint8_t y, uint8_t blastRadius);
static void clientHandleMovePlayer(uint8_t playerIndex, uint8_t direction);
static void clientHandleKillPlayer(uint8_t playerIndex);
static void clientHandleDestroyBlock(uint8_t x, uint8_t y);
static void clientHandlePlacePowerup(uint8_t powerupType, uint8_t x, uint8_t y);
static void clientHandlePowerupPlayer( uint8_t powerupType);
static void clientHandleGameOver(uint8_t winningPlayerIndex);
static void clientHandleRemovePowerup(uint8_t x, uint8_t y);

static void clientIncreaseBombCount();
static void clientIncreaseBombRadius();

static void clientRegisterPlayer(uint8_t playerIndex);
static uint8_t clientValidateMove(uint8_t direction);
static uint8_t clientValidatePlaceBomb();
#endif	/* BOMBERMAN_H */

//Methods to create server messages
static void serverMessageRequestPlayers();
static void serverMessageSetPlayer( uint8_t address, uint8_t playerIndex);
static void serverMessageGameStart( uint8_t numberOfPlayers);
static void serverMessagePlaceBomb( uint8_t x, uint8_t y);
static void serverMessageExplodeBomb( uint8_t x, uint8_t y, uint8_t blastSize);
static void serverMessageMovePlayer( uint8_t playerIndex, uint8_t direction);
static void serverMessageKillPlayer( uint8_t playerIndex);
static void serverMessageDestroyBlock( uint8_t x, uint8_t y);
static void serverMessagePlacePowerup( uint8_t type, uint8_t x, uint8_t y);
static void serverMessagePowerupPlayer(uint8_t address, uint8_t type);
static void serverMessageGameOver(uint8_t playerIndex);
static void serverMessageRemovePowerup(uint8_t x, uint8_t y);

//Client methods to create messages
static void clientMessageRegisterPlayer();
static void clientMessagePlaceBomb();
static void clientMessageMove( uint8_t direction);

//Debug Methods
static void debug_register4Players(void);
static void debug_register9Players(void);
static void debug_register16Players(void);
static void debug_register25Players(void);


//Emulator
void e_clientMessageRegisterPlayer(uint8_t playerId);
void e_clientMessagePlaceBomb(uint8_t playerAddress);
void e_clientMessageMove( uint8_t playerAddress, uint8_t playerIndex, uint8_t direction);

static void e_addNewPlayer();