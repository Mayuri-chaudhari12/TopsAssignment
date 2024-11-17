#include <stdio.h>

void display_menu() {
    // Display available food items with prices
    printf("\nAvailable Food Items:\n");
    printf("1. Burger  Price = 180rs/pcs\n");
    printf("2. Pizza Price = 100rs/pcs\n");
    printf("3. Pasta 120rs/pcs\n");
    printf("4. Idli  50rs/pcs\n");
    printf("5. Ice Cream - 30rs/pcs\n");
    printf("6. Exit\n");
}

void display_bill(float total) {
    // Display the final bill
    printf("\n Your Total Bill is: $%.2f\n", total);
    printf("Thank you for dining  uwiths! Have a great day.\n");
}

int main() {
    float total_bill = 0.0;  // Total bill initialized to 0
    int choice, quantity;
    float price, item_total;
    char more_order[4];

    // Loop for taking multiple orders until the user decides to stop
    while (1) {
        display_menu();  // Show the menu
        printf("\nPlease select an item by entering the number (1-6): ");
        scanf("%d", &choice);

        // Handle the user's menu selection
        switch (choice) {
            case 1:
                price = 180.0;
                printf("How many Burgers would you like to order? ");
                break;
            case 2:
                price = 100.0;
                printf("How many Pizzas would you like to order? ");
                break;
            case 3:
                price = 120.0;
                printf("How many Pastas would you like to order? ");
                break;
            case 4:
                price = 50.0;
                printf("How many Idli would you like to order? ");
                break;
            case 5:
                price = 30.0;
                printf("How many Ice Creams would you like to order? ");
                break;
            case 6:
                // Exit the program
                printf("\nExiting the system. Thank you for visiting!\n");
                display_bill(total_bill);  // Show the final bill
                return 0;
            default:
                printf("Invalid choice. Please select a valid option (1-6).\n");
                continue;  // Ask for input again if invalid
        }

        // Take the quantity of the selected item
        scanf("%d", &quantity);

        // Calculate the total price for the selected item
        item_total = price * quantity;
        printf("%d item(s) will Amount $%.2f.\n", quantity, item_total);

        // Add the item total to the overall bill
        total_bill += item_total;

        // Ask if the user wants to order more items
        printf("Would you like to select more items? (yes/no): ");
        scanf("%s", more_order);

        // If the user doesn't want more items, display the final bill and exit
        if (strcmp(more_order, "no") == 0) {
            display_bill(total_bill);
            break;  // Exit the loop and end the program
        }
        else if (strcmp(more_order, "yes") != 0) {
            // Handle invalid response
            printf("Invalid input. Please answer with 'yes' or 'no'.\n");
            continue;  // Ask again if the input is invalid
        }
    }

}
