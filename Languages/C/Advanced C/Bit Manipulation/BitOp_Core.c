#include<stdio.h>
#include<stdint.h>

int main(){

    uint8_t n, a = 0b10101010; // Example 8-bit number
 
    printf("Initial value of a is %d\n", a);
    printf("enter a bit value ");
    scanf("%d", &n);

    //Set a bit
    a |= (1<<n);
    printf("The value after setting bit %d is %d\n", n, a);

    // clear a bit
    a &= ~(1<<n);
    printf("The value after clearing bit %d is %d\n", n, a);

    // toggle a bit
    a ^= (1<<n);
    printf("The value after toggling bit %d is %d\n", n, a);

    //read a bit
    printf("The value of bit %d is %d\n", n, (a>>n)&1);
}