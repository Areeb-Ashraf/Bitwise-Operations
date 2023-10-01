#include <stdio.h>
#include "major1.h"

int main() {
    while (1) {
        int opt;
        printf("Enter the menu option for the operation to perform:\n"
               "(1) Count Leading Zeroes\n"
               "(2) Endian Swap\n"
               "(3) Rotate-right\n"
               "(4) Parity\n"
               "(5) EXIT\n-->");        
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                countLeadingZeroes();
                break;
            case 2:
                endianSwap();
                break;
            case 3:
                rotateRight();
                break;
            case 4:
                parity();
                break;
            case 5:
                printf("Program terminating. Goodbye...\n");
                return 0;
            default:
                printf("Error: Invalid option. Please try again.\n");
                break;
        }
    }
}
