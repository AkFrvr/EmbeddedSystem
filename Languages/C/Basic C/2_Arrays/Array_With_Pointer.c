/*****************************************************************
* Pointer & Array
* 1. Array name is a pointer to the first element of the array.
* 2. Array name is not a variable, it is a constant pointer.
* 3. Array name cannot be changed, it is fixed at the time of declaration.
* 4. Array name cannot be used as a lvalue.
* 5. Array name cannot be incremented or decremented.
* 6. Array name cannot be dereferenced.
* 7. Array name cannot be used with pointer arithmetic.
********************************************************************/

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}; // array of 5 integers
    int *p = a; // pointer to the first element of the array

    printf("Address of a[0]: %u\n", p); // prints the address of the first element of the array
    printf("Value of a[0]: %d\n", *p); // prints the value of the first element of the array
    printf("Value of a[1]: %d\n", *(p + 1)); // prints the value of the second element of the array
    p++; // increment the pointer to point to the next element of the array
    printf("Address of a[1]: %u\n", p); // prints the address of the second element of the array
    printf("Value of a[1]: %d\n", *p); // prints the value of the second element of the array
    return 0;
}