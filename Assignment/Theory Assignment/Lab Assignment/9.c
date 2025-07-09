/* Q10. Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and 
print the result. */
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num; // ptr now holds the address of num

    // Show address and value
    printf("Address of num: %p\n", &num);
    printf("Pointer (ptr) holds address: %p\n", ptr);
    printf("Value at that address (using *ptr): %d\n", *ptr);

    // Modify the value using pointer
    *ptr = 25;

    // Show updated value
    printf("After modification using pointer:\n");
    printf("num = %d\n", num);

    return 0;
}
