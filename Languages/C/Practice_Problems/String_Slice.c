// resturn the slice of string from n to m
#include <stdio.h>
#include <string.h>

int main(){

    printf("Enter a string: ");
    char str[1000];
    fgets(str, sizeof(str), stdin); // Read a line of input

    int len = strlen(str);
    printf("Length of the string: %d\n", len);
    
    int n, m;
    printf("Enter the starting index n: ");
    scanf("%d", &n);
    printf("Enter the ending index m: ");
    scanf("%d", &m);

    if(n < 0 || m >= len || n > m) {
        printf("Invalid indices\n");
        return 1;
    }
    else{
        for (int i = n; i <= m; i++) {
            printf("%c", str[i]);
        }
    }

    printf("\n");
    return 0;
        
    
}