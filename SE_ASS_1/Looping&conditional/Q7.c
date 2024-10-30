//WAP to print number in reverse order e.g.:number=64728--->revers=82746.
#include <stdio.h>

int main() {
    int  number=64728, reversed = 0,rem;
    
    printf("Number:",number);

    while (number>0)
    {
        rem=number%10;
        reversed=reversed*10+rem;
        number=number/10;
    }
    printf("Revers number=%d",reversed);

    return 0;
}
