#include <stdio.h>

int main()
{
    int choice, quantity;
    char moreOrder;
    int totalAmount = 0;

    do
    {
        // Display menu
        printf("------------- Menu -------------\n");
        printf("1. Pizza     price = 180rs/pcs\n");
        printf("2. Burger    price = 100rs/pcs\n");
        printf("3. Dosa      price = 120rs/pcs\n");
        printf("4. Idli      price = 50rs/pcs\n");
        printf("--------------------------------\n");
        // take choice
        printf("Please Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Take quantity
        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        // Calculate and display amount for selected item
        switch (choice)
        {
        case 1:
            printf("You have selected Pizza.\n");
            totalAmount += 180 * quantity;
            break;
        case 2:
            printf("You have selected Burger.\n");
            totalAmount += 100 * quantity;
            break;
        case 3:
            printf("You have selected Dosa.\n");
            totalAmount += 120 * quantity;
            break;
        case 4:
            printf("You have selected Idli.\n");
            totalAmount += 50 * quantity;
            break;
        default:
            printf("Invalid choice. Please select a valid item.\n");
        }

        // Show current total
        printf("Current Total Amount = %d\n", totalAmount);

        // Ask for more orders
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrder);

    } while (moreOrder == 'y' || moreOrder == 'Y');

    // Final bill
    printf("--------- Final Bill ---------\n");
    printf("Total Amount to Pay = %d Rs\n", totalAmount);
    printf("------------------------------\n");

    return 0;
}
