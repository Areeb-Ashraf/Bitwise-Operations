#include "major1.h"

int main()
{
    while (1)
    {
        // Declare variables for input
        int option;
        long long int inputTemp;
        unsigned int inputNum, rotateNum;

        // Get input of options
        printf("Enter the menu option for the operation to perform:\n"
               "(1) Count Leading Zeroes\n"
               "(2) Endian Swap\n"
               "(3) Rotate-right\n"
               "(4) Parity\n"
               "(5) EXIT\n-->");
        scanf("%d", &option);

        if (option == 5)
        {
            printf("Program terminating. Goodbye...\n");
            break;
        }

        if (option < 1 || option > 5)
        {
            printf("Error: Invalid option. Please try again.\n");
            continue;
        }

        // Get input from user and check if it is in range (1 & 4294967295)
        do
        {
            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
            scanf("%lld", &inputTemp); // Reading as long long for validation
        } while (inputTemp < 1 || inputTemp > 4294967295);

        inputNum = (unsigned int)inputTemp;

        // Execute functions with switch cases based on user input
        switch (option)
        {
        // Case 1: Count Leading Zeros
        case 1:
            // Call count leading zeros function
            printf("The number of leading zeroes in %u is %u\n", inputNum, countLeadingZeros(inputNum));
            break;

        // Case 2: Endian Swap
        case 2:
            printf("Endian swap of %u gives %u\n", inputNum, endianSwap(inputNum));
            break;

        // Case 3: Rotate Right
        case 3:
            do
            {
                printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
                scanf("%u", &rotateNum);
            } while (rotateNum > 31); // No need to check for <0 as it's unsigned
            printf("%u rotated by %u position gives: %u\n", inputNum, rotateNum, rotateRight(inputNum, rotateNum));
            break;

        // Case 4: Parity
        case 4:
            printf("Parity of %u is %u\n", inputNum, checkParity(inputNum));
            break;

        // Case 5: Exit
        case 5:
            printf("Program terminating. Goodbye...\n");
            return 0;

        default:
            // Print error for invalid input
            printf("Error: Invalid option. Please try again.\n");
            break;
        }
    }
}
