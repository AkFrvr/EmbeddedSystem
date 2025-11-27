#include <stdio.h>
#include <string.h>

int main(){

    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int len = strlen(str);
    printf("Length of the string: %d\n", len);
    
    for (int i = 0; i < len; i++) {

        // Convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        } 
        // Add 32 to convert to uppercase
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}