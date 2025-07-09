/*Q8.Write a C program that calculates the factorial of a number using a function. Include function 
declaration, definition, and call.*/
#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num, result;

    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function
    result = factorial(num);

    // Display result
    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}

// Function definition
int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}
