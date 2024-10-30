/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candida*/
#include <stdio.h>

int main() {
    // Declare variables to hold marks
    int physics, chemistry, mathematics;
    int totalMarks, totalMathsPhysics;

    // Input marks obtained in Physics, Chemistry, and Mathematics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathematics);
    
    // Calculate total marks
    totalMarks = physics + chemistry + mathematics;
    totalMathsPhysics = physics + mathematics;

    // Check eligibility
    if ((mathematics >= 65 && physics >= 55 && chemistry >= 50 && totalMarks >= 190) ||
        (totalMathsPhysics >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
