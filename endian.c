#include "major1.h"

unsigned int endianSwap(unsigned int num)
{
    unsigned int B0, B1, B2, B3;

    // Extract bytes using bitwise AND and bit shifts
    B0 = (num & 0x000000FF) >> 0;
    B1 = (num & 0x0000FF00) >> 8;
    B2 = (num & 0x00FF0000) >> 16;
    B3 = (num & 0xFF000000) >> 24;

    // Swap and combine bytes
    return (B0 << 24) |
           (B1 << 16) |
           (B2 << 8) |
           (B3 << 0);
}
