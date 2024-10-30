//WAP to print factorial of  given numbers.
#include<stdio.h>
int main(){
    int num,fact,i;
    fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        fact=fact*i;
        printf("%d \t",fact);
    }
    
}

