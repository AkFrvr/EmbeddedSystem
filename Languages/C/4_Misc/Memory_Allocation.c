/**********************************************************************************************************************************************************
 * In normal C programming, memory allocation is done at compile time.
 * This means that the size of the data structures must be known at compile time.
 * However, in some cases, we may not know the size of the data structures at compile time.
 * In such cases, we can use dynamic memory allocation.
 * Dynamic memory allocation allows us to allocate memory at runtime.
 * There are several functions in C that can be used for dynamic memory allocation.
 * The most commonly used functions are 
 * malloc() - allocates a block of memory of a specified size and returns a pointer to the first byte of the block.
 * calloc() - allocates a block of memory for an array of elements, initializes all bytes to zero, and returns a pointer to the first byte of the block.
 * realloc() - changes the size of a previously allocated block of memory and returns a pointer to the first byte of the block.
 * free() - deallocates a block of memory that was previously allocated by malloc(), calloc(), or realloc().
********************************************************** ************************************************************************************************/
#include <stdio.h>
#include <stdlib.h> // for malloc, free

int main(){

    // Allocate memory for an float using malloc
    float *ptr = (float *)malloc(sizeof(float)); 
        // malloc does not initialize the allocated memory

    // Allocate 5 times the size of an integer using malloc
    //int *arr = (int *)malloc(5 * sizeof(int));

    // Same can be done using calloc
    int *arr = (int *)calloc(5, sizeof(int)); // Note: calloc takes two arguments: number of elements and size of each element
    // calloc initializes the allocated memory to zero

    
    if (ptr == NULL || arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }
    else {
        printf("Memory allocation successful\n");
    }

    printf("Size of int: %d\n", sizeof(int)); // size of int
    printf("size of arr: %d\n", 5*sizeof(arr)); // size of pointer to int
    printf("size of arr[0]: %d\n", sizeof(arr[0])); // size of first element of 

    // Add values to the allocated memory
    *ptr = 10; 
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1; 
    }

    // Print the values stored in the allocated memory
    printf("Value of ptr: %f\n", *ptr); 

    printf("Values in arr: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 

    // Reallocate memory for ptr to hold 2 floats
    ptr = (float *)realloc(ptr, 2 * sizeof(float));

    ptr[1] = 20; 
    ptr[0] = 10; 

    printf("Reallocated memory for ptr\n");
    printf("Value of ptr[0]: %f\n", ptr[0]);
    printf("Value of ptr[1]: %f\n", ptr[1]);

    // Free the allocated memory for ptr and arr
    free(ptr); 
    free(arr); 
    
    return 0; // Return 0 to indicate successful
}
