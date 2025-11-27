/************************************************************************************
 * Pointers Defination: A variable that stores the address of another variable.
 * It points towards the address of associated variable.
 * Syntax: data_type *pointer_name;
 * Example: int *p; // p is a pointer to an integer
 *          p = &a; // p points to the address of variable a
 *         Here "*" is used to declare a pointer variable.
 *        "&" is the address operator, which returns the address of a variable.
 *     
 ************************************************************************************/

#include <stdio.h>

int main(){

    int a = 10; // normal variable
    int *p; // pointer variable
    p = &a; // Assignment - p points to the address of variable a

    printf("Value of a: %d\t", a); // prints the value of a
    printf("& Address of a: %p\n", &a); // prints the address of a
    printf("Value of p: %p\t", p); // prints the value of p (address of a)
    printf("& Value pointed by p: %d\n", *p); // prints the value pointed by p (value of a)

    //Changing a through pointer
    *p = 20; // changes the value of a through pointer p
    printf("Value changed through pointer p is 20\n");
    printf("New value of a: %d\n \n", a); // prints the new value of a (20)


    printf("Another way or a shortcut to declare & assign pointer: \n");

    // Alternate use of pointer
    int b = 30; // another normal variable
    // this type of pointer declaration is also valid
    int *q = &b; // Declaration + Assignment -q is declared as a pointer to an integer and initialized to point to the address of variable b
   

    printf("Value of b: %d\t", b); // prints the value of b
    printf("& Address of b: %p\n", &b); // prints the address of b
    printf("Value of q: %p\t", q); // prints the value of q (address of b)
    printf("& Value pointed by q: %d\n", *q); // prints the value pointed by q (value of b)


    // use case for * and & operators
    printf("Use case for * and & operators:\n");
    printf("Value of b: %d\t", *(&b)); // prints the value of b using * and & operators

    return 0;
}