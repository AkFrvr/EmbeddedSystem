/***************************************************************************************
 * Generic Pointer is a pointer which can point to any data type.
 * It is declared as void pointer.
 * Syntax: void *pointer_name;
 * Example: void *p; // p is a generic pointer
 * we have to take precaution while using generic pointer.
 * We have to typecast it to the required data type before using it.
 * Example: int *p1 = (int *)p; // p is typecasted to int pointer
 * we cannot use generic pointer in arithmetic operations.
 * Example: p + 1; // this is not valid
 * we have to typecast it to the required data type before using it in arithmetic operations.
 * Example: (int *)p + 1; // this is valid
 * we cannot dereference a generic pointer directly.
 * Example: *p; // this is not valid
 * we have to typecast it to the required data type before dereferencing it.
 * Example: *(int *)p; // this is valid
 * we can use generic pointer to pass any data type to a function.
 ***************************************************************************************/


#include <stdio.h>
#include <string.h>

int main(){

    int a = 12; 
    char b = 'A';
    float c = 12.34;
    double d = 123.456;
    char A[] = "Hello World!"; 

    void *p; // generic pointer

    p = &a; // p points to the address of variable a
    printf("Value of a: %d\n", *(int *)p); // prints the value of a

    p = &b; // p points to the address of variable b
    printf("Value of b: %c\n", *(char *)p); // prints the value of b

    p = &c; // p points to the address of variable c
    printf("Value of c: %f\n", *(float *)p); // prints the value of c

    p = &d; // p points to the address of variable d
    printf("Value of d: %lf\n", *(double *)p); // prints the value of d

    p = &A; // p points to the address of variable A
    printf("Value of A: %s\n", (char *)p); // prints the value of A
    
}