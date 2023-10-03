#include "major1.h"

unsigned int checkParity(unsigned int x) {
    unsigned int parity = 0;
    while (x) {
        parity ^= (x & 1);
        x >>= 1;
    }
    return parity;
}

