/* Q4. Write a C program that accepts two integers from the user and performs arithmetic, relational, and 
logical operations on them. Display the results. */
#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);
  // Arithmetic Operations
    printf(" Arithmetic Operations \n");
    printf("%d + %d = %d\n", a, b, a + b);// Addition operator
    printf("%d - %d = %d\n", a, b, a - b);// Subtraction operator
    printf("%d * %d = %d\n", a, b, a * b);// Multiplication operator
    printf("%d / %d = %d\n", a, b, a / b);// Division operator
    printf("%d %% %d = %d\n", a, b, a % b);  // Modulus operator
// Relational Operations
    printf(" Relational Operations \n");
    printf("%d == %d: %d\n", a, b, a == b);// Equal to operator
    printf("%d != %d: %d\n", a, b, a != b);// Not equal to operator
    printf("%d <  %d: %d\n", a, b, a < b);//    Less than operator
    printf("%d >  %d: %d\n", a, b, a > b);//    Greater than operator
    printf("%d <= %d: %d\n", a, b, a <= b);//   Less than or equal to operator
    printf("%d >= %d: %d\n", a, b, a >= b);//   Greater than or equal to operator

    // Logical Operations
    printf("Logical Operations\n");
    printf("%d && %d: %d\n", a, b, a && b);  // True if both non-zero
    printf("%d || %d: %d\n", a, b, a || b);  // True if at least one non-zero
    printf("!%d = %d\n", a, !a);             // True if a is zero
    printf("!%d = %d\n", b, !b);             // True if b is zero

    return 0;
}
