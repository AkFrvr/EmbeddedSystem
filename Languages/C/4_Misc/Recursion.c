/***********************************************************************************
 * File Name    : Recursion.C
 * Recursion : A function that calls itself.
 * Every recursive function has two parts:
 * 1. Base case: The condition under which the function stops calling itself.
 * 2. Recursive case: The part of the function that calls itself.
 * 
 ***********************************************************************************/


 #include <stdio.h>


  // Example 1 - Factorial of a number

  long long factorial(int n) {
      if (n == 0) { // Base case
          return 1;
      } else { // Recursive case
          return n * factorial(n - 1);
      }
  }

 // Example 2 - Fibonacci series

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case for n == 0
    } else if (n == 1) {
        return 1; // Base case for n == 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

// Function to print Fibonacci series up to n terms
void printFibonacciSeries(int terms) {
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
    



int main()
{
    int num;

    printf("Enter a postive number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %llu \n", num, factorial(num));
    printf("Fibonacci of %d = %d \n", num, fibonacci(num));
    printFibonacciSeries(num);
    
    return 0;
}