/**
 * @file Pointer_to_Pointer.c
 * @brief Demonstrates the concept of pointer to a pointer in C.
 *
 * This program illustrates the use of pointers and pointers to pointers
 * by declaring an integer variable, a pointer to that variable, and a
 * pointer to the pointer. It prints the values and addresses at each
 * level of indirection to show how pointers work in C.
 *
 * Key Concepts:
 * - A pointer stores the address of a variable.
 * - A pointer to a pointer stores the address of another pointer.
 * - Dereferencing a pointer allows access to the value it points to.
 * - Double dereferencing a pointer to a pointer allows access to the
 *   value of the variable it ultimately points to.
 *
 * Program Flow:
 * 1. Declare an integer variable `value` and initialize it.
 * 2. Declare a pointer `ptr` and assign it the address of `value`.
 * 3. Declare a pointer to a pointer `ptr_to_ptr` and assign it the
 *    address of `ptr`.
 * 4. Print the values and addresses at each level of indirection.
 *
 * Output:
 * - The value of the integer variable.
 * - The address of the integer variable.
 * - The value pointed to by the pointer.
 * - The address stored in the pointer.
 * - The value pointed to by the pointer to the pointer.
 * - The value accessed through double dereferencing.
 */
#include <stdio.h>

int main() {
    int value = 42;         // A normal integer variable
    int *ptr = &value;      // Pointer to the integer variable
    int **ptr_to_ptr = &ptr; // Pointer to the pointer

    // Printing the values and addresses
    printf("Value: %d\n", value);
    printf("Address of value: %p\n", (void*)&value);

    printf("Pointer (ptr) points to value: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", (void*)ptr);

    printf("Pointer to pointer (ptr_to_ptr) points to ptr: %p\n", (void*)*ptr_to_ptr);
    printf("Value accessed through ptr_to_ptr: %d\n", **ptr_to_ptr);

    return 0;
}