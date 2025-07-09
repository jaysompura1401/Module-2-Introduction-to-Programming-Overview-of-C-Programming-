/*Q13. Write a C program to create a file, write a string into it, close the file, then open the file again to read 
and display its contents.*/
#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Create and open a file for writing
    file = fopen("example.txt", "w");      
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write a string to the file
    fprintf(file, "Hello, this is a test string.\n");

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display the contents of the file
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(file);

    return 0;
}