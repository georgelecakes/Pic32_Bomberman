/* 
 * File:   bomberman_map.h
 * Author: George
 *
 * Created on April 24, 2015, 6:44 PM
 */

#ifndef BOMBERMAN_MAP_H
#define	BOMBERMAN_MAP_H

//Map Sizes, the map will expand accomodate the number of players
#define MAP_DIM_2x2 10
#define MAP_DIM_3x3 14
#define MAP_DIM_4x4 18
#define MAP_DIM_5x5 22

enum map_sizes{
    map_2x2 = 2,
    map_3x3 = 3,
    map_4x4 = 4,
    map_5x5 = 5
};

#endif	/* BOMBERMAN_MAP_H */

