// This program rotates an array of integers to the left by a specified number of positions.

#include<stdio.h>

int main(){

    int a[5] = {1, 2, 3, 4, 5}; // array of 5 integers

    printf("Current values of the array:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", a[i]); // print each element of the array
    }

    printf("How many positions do you want to rotate the array? ");
    int n;
    scanf("%d", &n); // read the number of positions to rotate the array


    for (int i = 0; i < n; i++){
        int temp = a[0]; 

        for (int j = 0; j < 4; j++){
            a[j] = a[j + 1]; // shift elements to the left
        }
        a[4] = temp; // place the first element at the end of the array
    }

    printf("Array after rotation:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", a[i]); // print each element of the array after rotation
    }   

}