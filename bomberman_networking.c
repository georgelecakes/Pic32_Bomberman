#include "bomberman_networking.h"

char* getName( uint8_t address)
{
    switch(address)
    {
        case MASTER:
            return "Master";
            break;
        case LECAKES:
            return "George Lecakes";
            break;
        case ALEYAN:
            return "Alex Aleyan";
            break;
        case AMRITKAR:
            return "Atharva Amritkar";
            break;
        case CANDELARIA:
            return "Kate Candelaria";
            break;
        case CARLUCCIO:
            return "Carluccio";
            break;
        case DONOW:
            return "Matt Donow";
            break;
        case LECAKES_ALL:
            return "George Lecakes All";
            break;
        case BLAZEJEWSKI:
            return "Dan Blazejewski";
            break;
        case HAAS:
            return "Josh Haas";
            break;
        case HARRIS:
            return "Harris";
            break;
        case HENSHAW:
            return "Lee Henshaw";
            break;
        case JACOBSEN:
            return "Jacobsen";
            break;
        case KLODNICKI:
            return "Klondnicki";
            break;
        case BLAZEJEWSKI_ALL:
            return "Dan Blazejewski";
            break;
        case MORRIS:
            return "Tom Morris";
            break;
        case LABARCK:
            return "Joey Labarck";
            break;
        case LIU:
            return "Liu";
            break;
        case RITCHIE_III:
            return "James Ritchie III";
            break;
        case RUPP:
            return "Andrew Rupp";
            break;
        case RUSSO:
            return "Russo";
            break;
        case MORRIS_ALL:
            return "Tom Morris";
            break;
        case TRAFFORD:
            return "Trafford";
            break;
        case WHALEN:
            return "John Whalen";
            break;
        case WIBLE:
            return "Wible";
            break;
        case MACCARONE:
            return "Matt Maccarone";
            break;
        case VOTTA:
            return "";
            break;
        case TRAFFORD_ALL:
            return "Russell Trafford";
            break;
        case MERLINO:
            return "Anthony";
            break;
        case GOODMAN:
            return "TG";
            break;
        case ALL_ALL:
            return "All all";
            break;
        case 255:

        default:
            return "Unknown";
            break;
    }
}
