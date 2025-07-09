/*Q9. Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to 
handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.*/
#include <stdio.h>

int main() {
    // 1D array part
    int arr[5];
    int i;

    printf("Enter 5 integers (1D array):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered (1D array):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2D array part
    int matrix[3][3];
    int row, col, sum = 0;

    printf("Enter elements of 3x3 matrix (2D array):\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("Matrix is:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
            sum += matrix[row][col];
        }
        printf("\n");
    }

    printf("Sum of all elements in matrix = %d\n", sum);

    return 0;
}
