/*Q11. Write a C program that takes two strings from the user and concatenates them using strcat(). Display 
the concatenated string and its length using strlen().*/
#include <stdio.h>
#include <string.h>  // for strcat() and strlen()

int main() {
    char str1[100], str2[100];

    // Take input from user
    printf("Enter first string: ");
    gets(str1);  // OR use fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    gets(str2);

    // Concatenate strings
    strcat(str1, str2);

    // Print concatenated string
    printf("Concatenated string: %s\n", str1);

    // Print length of concatenated string
    printf("Length of concatenated string: %lu\n", strlen(str1));

    return 0;
}
