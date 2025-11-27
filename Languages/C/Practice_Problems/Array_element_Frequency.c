#include <stdio.h>
#include <stdbool.h>

int getFrequency(int x, int* arr, int size, int idx);

int main() {
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

    // Frequency tracking
    int freqArr[size][2];  // [element, frequency]
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        int freq = getFrequency(arr[i], arr, size, i);
        if (freq != -1) {
            freqArr[uniqueCount][0] = arr[i];
            freqArr[uniqueCount][1] = freq;
            uniqueCount++;
        }
    }

    // Print unique elements
    printf("\nUnique elements in the array are:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", freqArr[i][0]);
    }

    // Print frequencies
    printf("\n\nFrequency of each unique element:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d : %d\n", freqArr[i][0], freqArr[i][1]);
    }

    return 0;
}

// Returns frequency of `x` starting at index `idx`, or -1 if already counted
int getFrequency(int x, int* arr, int size, int idx) {
    // Check if already counted
    for (int i = 0; i < idx; i++) {
        if (arr[i] == x)
            return -1;
    }

    int count = 1; // Count current element
    for (int i = idx + 1; i < size; i++) {
        if (arr[i] == x)
            count++;
    }

    return count;
}
