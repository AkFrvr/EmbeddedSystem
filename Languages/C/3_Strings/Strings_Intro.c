/******************************************************************
 * Strings are an array of characters terminated by a null character.
 * The null character is represented by '\0'.
 *******************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello "; // String initialization
    char str2[] = {'W','o','r','l','d','\0'};  // String initialization with null terminator
    // char str2[] = "World"; // Alternative initialization


    // Concatenation
    strcat(str1, str2); // str1 now contains "HelloWorld"
    printf("Concatenated String: %s\n", str1);

    // Length of a string
    int length = strlen(str1); // Length of str1
    printf("Length of String: %d\n", length);

    // Copying a string
    char str3[20];
    strcpy(str3, str1); // str3 now contains "HelloWorld"
    printf("Copied String: %s\n", str3);

    // Comparison of strings
    int cmp = strcmp(str1, str2); // Compare str1 and str2
    if (cmp == 0) {
        printf("Strings are equal\n");
    } else if (cmp < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    // Finding a character in a string
    char *ptr = strchr(str1, 'W'); // Find first occurrence of 'W'
    if (ptr != NULL) {
        printf("Character 'W' found at position: %ld\n", ptr - str1);
    } else {
        printf("Character 'W' not found\n");
    }

    return 0;
}