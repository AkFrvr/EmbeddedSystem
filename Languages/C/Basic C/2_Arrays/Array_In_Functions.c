/*************************************************************************
 * We can pass an array to a function using the following methods:
 * 1. By passing the array name as an argument to the function.
 * 2. By passing a pointer to the array.
 * 3. By passing the address of the first element of the array.
 *****************************************************************/

#include <stdio.h>

void printArray(int arr[], int size) { // function to print the array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // print each element of the array
    }
    printf("\n"); // print a new line after printing the array
}

void printArrayPointer(int *arr, int size) { // function to print the array using pointer
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // print each element of the array using pointer arithmetic
    }
    printf("\n"); // print a new line after printing the array
}

int main(){
    int a[5] = {1, 2, 3, 4, 5}; // array of 5 integers
    int size = sizeof(a) / sizeof(a[0]); // calculate the size of the array

    printf("Array passed by name:\n");
    printArray(a, size); // pass the array to the function by name

    printf("Array passed by pointer:\n");
    printArrayPointer(a, size); // pass the array to the function by pointer (array name is a pointer to the first element of the array)

    printf("Array passed by address:\n");
    printArrayPointer(&a[0], size); // pass the array to the function by pointer (address of the first element of the array)
    
    return 0;
}