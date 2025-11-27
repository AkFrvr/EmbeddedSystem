/**************************************************************
 * Array is a collection of values if same type 
 * syntax: type arrayName[size];
 * Example: int a[5]; // array of 5 integers
 */

#include <stdio.h>

int main(){

    int a[5]; // array of 5 integers
    char b[5]; // array of 5 characters
    float c[] = {10,4,5,6,9}; // array of 5 floats initialized with values

    // Input & Output of array elements
    printf("Input first index int of a: ");
    scanf(" %d", &a[0]); // input first element of array a

    printf("Input first index char of b: ");
    scanf(" %c", &b[0]); // input first element of array b
    

    printf("%d\n", a[0]); // output first element of array a
    printf("%c\n", b[0]); // output first element of array b
    printf("%f\n", c[0]); // output first element of array c

    return 0;
}