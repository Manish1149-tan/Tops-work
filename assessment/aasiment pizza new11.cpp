#include<stdio.h>

int main()
{
    int choice, qty, amount, total;   // variables for menu choice, quantity, item amount, and total
    char more;                        // variable to check if user wants to order more
    int totalamount = 0;              // variable to store the total bill, initialized to 0

    do
    {
        // Display menu
        printf("\n===== MENU =====\n");
        printf("1. Pizza  - Rs 180/pcs \n");
        printf("2. Burger - Rs 100/pcs \n");
        printf("3. Dosa   - Rs 120/pcs \n");
        printf("4. Idli   - Rs  50/pcs \n");
        printf("================\n");

        // Take user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Take quantity and calculate amount based on choice
        switch (choice)
        {
            case 1:
                printf("You selected Pizza.\n");
                printf("Enter the qty: ");
                scanf("%d", &qty);
                amount = 180 * qty;   // price calculation
                break;

            case 2:
                printf("You selected Burger.\n");
                printf("Enter the qty: ");
                scanf("%d", &qty);
                amount = 100 * qty;
                break;

            case 3:
                printf("You selected Dosa.\n");
                printf("Enter the qty: ");
                scanf("%d", &qty);
                amount = 120 * qty;
                break;

            case 4:
                printf("You selected Idli.\n");
                printf("Enter the qty: ");
                scanf("%d", &qty);
                amount = 50 * qty;
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                amount = 0;   // if invalid choice, no amount added
        }

        // Print amount for current order
        printf("Amount: %d\n", amount);

        // Add amount to total bill
        totalamount += amount;

        // Show updated total
        printf("Total amount so far: %d\n", totalamount);

        // Ask if user wants to order more
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &more);   // note: space before %c to avoid newline issues

    } while (more == 'y' || more == 'Y');   // loop continues if user enters 'y' or 'Y'

    // Final bill
    printf("\nThank you for your order!\n");
    printf("Your total bill is: %d\n", totalamount);

    return 0;
}

