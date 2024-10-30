//Accept no of student from user. i need to give 5 apples to each student. how many apples are requred?
#include <stdio.h>

int main() {
    int numberOfStudents;
    int applesPerStudent = 5;
    int totalApples;

    // Input the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Calculate the total number of apples required
    totalApples = numberOfStudents * applesPerStudent;

    // Output the result
    printf("Total apples required: %d\n", totalApples);

    return 0;
}
