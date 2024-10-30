//Find circumference of triangle formula:triangle=a+b+c;

#include<stdio.h>
int main(){
   float a, b, c;
   printf("Enter Value a");
   scanf("%f", &a);
   printf("Enter Value b");
   scanf("%f", &b);
   printf("Enter value c");
   scanf("%f",&c);

   float triangle =a+b+c;
   printf("circumference of triangle: %f",triangle);
}