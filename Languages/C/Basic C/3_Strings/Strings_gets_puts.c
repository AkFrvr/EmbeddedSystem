/*****************************************************************************************************************
 * To use strings with spaces,we can use "gets()" or "fgets()".
 * "gets()" is unsafe and should be avoided.
 * "fgets()" is safer and should be used instead.
 * "fgets()" reads a line from the specified stream and stores it into the string pointed to by str.
 * It stops when either (n-1) characters are read, or a newline character is read, or the end-of-file is reached,
 *  whichever comes first.
 ******************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 

    gets(str); // Read a string from input (unsafe, avoid using this)

    puts(str); // Print the string to output

    fgets(str, sizeof(str), stdin); // Read a string from input (safer alternative to gets)
    printf("%s", str); // Print the string to output

    return 0;

}
/*****************************************************************************************************************
 * Note: "gets()" is unsafe and should be avoided. It can lead to buffer overflow if the input exceeds the size of the buffer.
 * Use "fgets()" instead, which allows you to specify the maximum number of characters to read.
 ******************************************************************************************************************/

    