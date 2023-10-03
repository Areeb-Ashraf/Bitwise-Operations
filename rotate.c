#include "major1.h"

unsigned int rotateRight(unsigned int n, unsigned int d)
{
    return (n >> d) | (n << (32 - d));
}