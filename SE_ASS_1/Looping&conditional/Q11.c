//Accept 5 names from user at run time.
#include <stdio.h>

#define MAX_NAMES 5
#define NAME_LENGTH 50

int main() {
    char names[MAX_NAMES][NAME_LENGTH]; // Array to store names

    // Input: Accepting 5 names from the user
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); // Read name
    }

    // Output: Display the names
    printf("\nThe names you entered are:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
