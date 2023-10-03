#include "major1.h"

#define numSize sizeof(unsigned int) * 8 // define size of 32 bit int

// Declare function to count number of leading zeros
unsigned int countLeadingZeros(unsigned int num) {

    // Initialize most significant bit (equivalent to:- 10000000 00000000 00000000 00000000) and counter
    int msb = 1 << (numSize - 1);
    int count = 0;

    // Iterate over each bit
    for(int i = 0; i < numSize; i++)
    {
        // If leading set bit is found
        if((num << i) & msb)
        {
            // Terminate the loop
            break;
        }

        count++;
    }
    
    //Return number of leading zeroes
    return count;
}