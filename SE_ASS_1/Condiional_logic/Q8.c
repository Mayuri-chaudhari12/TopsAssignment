//WAP to accept the height of a persion in centimeters and categorize the persion according to their heght.

#include <stdio.h>

int main() {
    float height;

    // Input: Accept height in centimeters from the user
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    // Categorize based on height
    if (height < 150) {
        printf("You are categorized as: Short.\n");
    } else if (height >= 150 && height < 180) {
        printf("You are categorized as: Average.\n");
    } else {
        printf("You are categorized as: Tall.\n");
    }

    return 0;
}
