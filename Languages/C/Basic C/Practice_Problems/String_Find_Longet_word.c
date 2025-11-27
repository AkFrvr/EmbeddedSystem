#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0') {
            if (currLen == 0)
                currStart = i; // starting index of current word
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0; // reset for next word
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: ");
    for (int i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }
    printf("\n");

    return 0;
}
