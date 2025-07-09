/*Q7. Write a C program that uses the break statement to stop printing numbers when it reaches 5. Modify 
the program to skip printing the number 3 using the continue statement.*/
#include <stdio.h>
int main() {
    // Using break statement to stop at 5
    printf("Using break statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Stop the loop when i reaches 5
        }
        printf("%d ", i);
    }
    printf("\n");
    // Using continue statement to skip 3
    printf("Using continue statement:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; // Skip printing the number 3
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
