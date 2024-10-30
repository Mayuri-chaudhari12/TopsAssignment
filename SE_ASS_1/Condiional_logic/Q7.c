// Accept marks from user and check pass or fail
#include <stdio.h>

int main() {
    float marks;
    float passingMark = 40.0; // Define the passing mark

    // Input: Accept marks from the user
    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Check if the user has passed or failed
    if (marks >= passingMark) {
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}
