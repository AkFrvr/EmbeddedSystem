// read a data from addres 0x03420000
// and print it in decimal and hexadecimal format
// Basic Syntax: DataType value = *(DataType *)address;

#include <stdio.h>
#include <stdint.h>

#define MEMORY_ADDRESS 0x03420000

int main(){
    // Read from memory address
    uint32_t value = *(volatile const uint32_t *)MEMORY_ADDRESS; 
    // The 'volatile' keyword is used to prevent the compiler from optimizing the read operation
    // The 'const' keyword indicates that the memory location is not expected to change during program execution

    printf("Value in decimal: %u\n", value); // Print in decimal format
    printf("Value in hexadecimal: 0x%X\n", value); // Print in hexadecimal format

    return 0; // Ensure proper program termination
}

/************************************************************************************************
 * This program will not gerate any output when run in a standard C environment/pc.
 * It is intended to be run in an embedded system or a simulator that allows direct memory access.
 * The address 0x03420000 is an example and may not be valid in your environment.
 ************************************************************************************************/