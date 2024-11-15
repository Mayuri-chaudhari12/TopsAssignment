// WAP to show difference between Structure and Union.

#include <stdio.h>

// Define a structure
struct MyStruct {
    int num;       // 4 bytes
    float f;       // 4 bytes
    char ch;       // 1 byte
};

// Define a union
union MyUnion {
    int num;       // 4 bytes
    float f;       // 4 bytes
    char ch;       // 1 byte
};

int main() {
    // Create a structure variable
    struct MyStruct s;
    s.num = 10;
    s.f = 5.5;
    s.ch = 'A';
    
    // Create a union variable
    union MyUnion u;
    u.num = 10;
    u.f = 5.5;
    u.ch = 'A';

    // Display size of structure and union
    printf("Size of struct MyStruct: %zu bytes\n", sizeof(s));
    printf("Size of union MyUnion: %zu bytes\n", sizeof(u));

    // Show values in structure
    printf("\nStructure values:\n");
    printf("num = %d\n", s.num);
    printf("f = %.2f\n", s.f);
    printf("ch = %c\n", s.ch);

    // Show values in union (only one value is valid at a time)
    printf("\nUnion values (after assigning 'ch'):\n");
    printf("num = %d\n", u.num);  // The last assigned value is stored here
    printf("f = %.2f\n", u.f);    // The last assigned value is stored here
    printf("ch = %c\n", u.ch);    // The last assigned value is stored here

    
}
