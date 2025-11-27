/*****************************************************************************************
 * Strcture is a user-defined data type in C that allows grouping of different data types 
 * into a single unit. It is used to represent complex data structures and is particularly
 * useful for organizing related data together. Structures can contain variables of 
 * different types, including arrays and other structures.
 *****************************************************************************************/

#include <stdio.h>
#include <string.h>

struct Student{
    char name[20];
    int age;
    float gpa;
} S[3];

int main(){

    strcpy(S[0].name, "John");
    S[0].age = 20;
    S[0].gpa = 3.5;

    struct Student *p = S;
    strcpy(p[1].name, "Alice");
    p[1].age = 22;
    p[1].gpa = 3.8;
    p[1].name[0] = 'B'; // Modifying the first character of the name

    printf("Student 1: %s, Age: %d, GPA: %.2f\n", S[0].name, S[0].age, S[0].gpa);
    printf("Student 2: %s, Age: %d, GPA: %.2f\n", p[1].name, p[1].age, p[1].gpa);

    struct Student *q = &S[2];
    strcpy(q->name, "Bob");
    q->age = 21;
    q->gpa = 3.9;
    (*q).name[0] = 'R'; // Modifying the first character of the name

    printf("Student 3: %s, Age: %d, GPA: %.2f\n", q->name, q->age, q->gpa);
    printf("Size of struct Student: %zu bytes\n", sizeof(struct Student));
   
    

    return 0;

}