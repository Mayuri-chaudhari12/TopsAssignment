//Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    // Declare variables for cost price and selling price
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("There is no profit or loss. The selling price equals the cost price.\n");
    }

    return 0;
}

