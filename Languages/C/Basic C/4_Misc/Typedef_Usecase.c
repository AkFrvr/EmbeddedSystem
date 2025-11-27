/**************************************************************************************
 * 
 * This program demonstrates the use of the `typedef` keyword in C.
 * `typedef` is used to create type aliases, making code more readable
 * and easier to maintain. It is particularly useful for creating
 * shorter or more descriptive names for complex data types.
 * 
 * Use Cases:
 * 1. Simplifying type names (e.g., `unsigned int` to `uint`).
 * 2. Creating aliases for structures to avoid repetitive `struct` keyword usage.
 * 
 * Example:
 * - `typedef unsigned int uint;` creates an alias `uint` for `unsigned int`.
 * - `typedef struct { ... } Person;` creates an alias `Person` for the structure.
 **************************************************************************************/
#include <stdio.h>

// Using typedef to create aliases
typedef unsigned int uint;
typedef struct PersonInfo{
    char name[50];
    int age;
} Person;

int main() {
    // Using typedef alias for unsigned int
    uint number = 100;
    printf("Number: %u\n", number);

    // Using typedef alias for struct
    Person person1 = {"Alice", 25};
    printf("Name: %s, Age: %d\n", person1.name, person1.age);

    return 0;
}