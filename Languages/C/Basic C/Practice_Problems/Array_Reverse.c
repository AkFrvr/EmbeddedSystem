#include<stdio.h>

void Reverse(int *arr, int size){
    int tmp;
    for(int i=0; i<size/2; i++){
        tmp = arr[i];
        arr[i]= arr[size-1-i];
        arr[size-1-i] = tmp;
    }
}

int main()
{
    int size;
    printf("Tell me the size of the integer array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    // Read input elements
    for (int i = 0; i < size; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print input array
    printf("\nThe array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    Reverse(arr, size); // Call the function to reverse the array

    printf("\nThe reversed array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}