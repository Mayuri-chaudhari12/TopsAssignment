//write a C program to input electricity unit charges and calculate total electricity bill according to the given condition.
//for first 50 units rs.0.50/unit
//for next 100 units rs.0.75/unit
//for next 100 units rs. 1.20/unit
//for unit above 250 rs.1.50/unit
//an additional surcharge of 20% is added to the bill

#include <stdio.h>

int main() {
    float units, bill, totalBill;

    // Prompt the user to enter the number of electricity units
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    // Calculate the bill based on the unit consumption
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Calculate the total bill with a 20% surcharge
    totalBill = bill + (bill * 0.20);

    // Print the total bill
    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}
