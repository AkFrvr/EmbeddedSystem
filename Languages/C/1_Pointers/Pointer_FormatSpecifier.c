/******************************************************************************************************
 * This program demonstrates the use of pointer format specifier.
 * "%p" is usually used to print the address of a variable as it always prints in hexadecimal format.
 * "%d" is used to print the value of a variable.
 * Although we can use %p to print value pointed by pointer, it is not recommended.
 * because it may not give the correct output on all compilers.
 * It is better to use %d to print the value pointed by pointer.
 ******************************************************************************************************/

#include<stdio.h>

int main()
{
    int a = 10; // normal variable
    int *p = &a; // pointer variable and assignment - p points to the address of variable a

    printf("Address of a: %p\n", &a); // prints the address of a
    printf("Adress of a using p: %p\n", p); // prints the value of p (address of a)
    printf("Value pointed by p: %d\n", *p); // prints the value pointed by p (value of a)
    printf("Adress of P : %p\n", &p); // prints the address of p 
    printf("Value pointed by p in hex: %p\n", *p); // prints the value pointed by p (value of a) in hexadecimal format 
    
    //Decimal format
    printf("Address of a in decimal format: %u\n", &a); // prints the address of a in decimal format
    printf("Adress of a using p in decimal format: %u\n", p); // prints the value of p (address of a) in decimal format
    printf("Value pointed by p in decimal format: %u\n", *p); // prints the value pointed by p (value of a) in decimal format
    printf("Adress of P in decimal format: %u\n", &p); // prints the address of p in decimal format
    
}