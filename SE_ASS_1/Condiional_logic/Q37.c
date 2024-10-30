//WAP to show
 //i. monday to sunday using switch case
 //ii.vowel or consonant using swith case.
 #include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    // Use switch case to check if the character is a vowel or consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input. Please enter a valid alphabet.\n");
            }
            break;
    }

    return 0;
}
