# Systems Programming Major 1 Project

## Description 
This C program provides a menu-driven interface to perform various bitwise operations on 32-bit integers. The supported operations include `Count Leading Zeros`, `Endian Swap`, `Rotate Right` and `Parity`. Each operation is implemented using bitwise operators rather than traditional arithmetic operations.

## Contributers of this project:
- Areeb Ashraf -> ***clz.c***
- Sowmya Reddy Tukakula -> ***parity.c***
- SriramKumar Krishna Kumar -> ***endian.c***
- Vishnu Varshan Krishna Kumar -> ***rotate.c***

## Files 

### major1.h
This header file contains include directives and function prototypes for all operations.

### major1.c
This file is the core of the project, orchestrating a menu-driven interface. It takes user input, including the operation selection and integer operand(s), and then dispatches the corresponding function to perform bitwise operations. The program operates in a loop, ensuring users can perform multiple operations without restarting. It also includes error handling to manage invalid inputs. This file serves as the control center of the program, connecting user interaction with the individual bitwise operation functions defined in separate files.

### clz.c
This file defines a function countLeadingZeroes that calculates the number of leading zeroes in a given 32-bit integer using bitwise operations. It first initializes the most significant bit and a counter. Then, it iterates through the bits of the input number, checking for the first set bit (1). When a set bit is found, the loop terminates, and the count of leading zeroes is printed. This code provides an efficient and bitwise approach to count leading zeroes, which can be helpful in various low-level programming scenarios.

### endian.c
This file contains the implementation for the endianSwap function, which is designed to handle the conversion of a 32-bit integer's byte order. It efficiently swaps the byte order of a given 32-bit integer, making it useful for tasks that require converting between Litte Endian and Big Endian. 

### rotate.c

### parity.c
This code defines a function compute_parity that calculates the parity (whether the number of set bits in the binary representation is even or odd) of an unsigned integer x. It employs a bitwise XOR operation to toggle a parity variable as it iteratively checks the least significant bit of x. The function returns the computed parity as an unsigned integer.

## Program Running Instrucions

To compile and execute the program use `make run`.

**Note:** Make sure to have all the files in the same directory.