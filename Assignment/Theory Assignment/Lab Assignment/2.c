/* Q3.Write a C program that includes variables, constants, and comments. Declare and use different data types 
(int, char, float) and display their values */
#include <stdio.h>
int main() {
    // Declare variables
    int integerVar = 10;          // Integer variable
    char charVar = 'A';          // Character variable
    float floatVar = 1.22;      // Floating-point variable
    const float PI = 3.14;      // Constant variable
    // Display the values of the variables
    printf("Integer: %d\n", integerVar);
    printf("Character: %c\n", charVar);
    printf("Float: %.2f\n", floatVar);
    printf("Constant PI: %.2f\n", PI);

    return 0;
    
}