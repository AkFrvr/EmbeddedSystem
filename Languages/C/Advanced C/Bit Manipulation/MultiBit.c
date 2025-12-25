#include<stdio.h>
#include<stdint.h>

int main(){ 

    uint8_t n1,n2 ,a = 0; // Example 8-bit number
 
    printf("Initial value of a is %hhu\n", a);
    printf("enter first bit value ");
    scanf("%hhu", &n1);

    printf("enter second bit value ");
    scanf("%hhu", &n2);

    uint_t bit_mask = (uint8_t)( (1UL <<n1) | (1UL<<n2) );
    printf("Bit mask for bits %hhu and %hhu is %hhu\n", n1, n2, bit_mask);

    //Set bits

    a|= bit_mask;
    printf("The value after setting bits %hhu and %hhu is %hhu\n", n1, n2, a);

    // clear bits
    a &= ~bit_mask;
    printf("The value after clearing bits %hhu and %hhu is %hhu\n", n1, n2, a);

    // toggle bits
    a ^= bit_mask;  
    printf("The value after toggling bits %hhu and %hhu is %hhu\n", n1, n2, a);

    //Set only n1
    a = a & ~bit_mask | (1<<n1);
    printf("The value after setting only bit %hhu is %hhu\n", n1, a);

    return 0;
}   

