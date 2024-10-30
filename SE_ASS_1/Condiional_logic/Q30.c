//.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-
#include <stdio.h>

int main() {
    // Declare variables
    int customerID;
    char customerName[50];
    float unitsConsumed, billAmount, finalBill;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName); // to read a string with spaces

    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Calculate the bill amount based on units consumed
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed < 600) {
        billAmount = (350 * 1.20) + ((unitsConsumed - 350) * 1.50);
    } else if (unitsConsumed < 800) {
        billAmount = (350 * 1.20) + (250 * 1.50) + ((unitsConsumed - 600) * 1.80);
    } else {
        billAmount = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((unitsConsumed - 800) * 2.00);
    }

    // Apply surcharge if applicable
    if (billAmount > 800) {
        billAmount += billAmount * 0.18; // 18% surcharge
    }

    // Ensure minimum bill amount
    if (billAmount < 256) {
        billAmount = 256;
    }

    // Print the bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: $%.2f\n", billAmount);

    return 0;
}
