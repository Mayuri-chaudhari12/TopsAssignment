//find the area of a rectangle prism formula:A=2(wl+hl+hw)

#include <stdio.h>

int main() {
    float width, length, height, area;

    // Input the width, length, and height from the user
    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);
    
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);
    
    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    // Calculate the surface area
    area = 2 * (width * length + height * length + height * width); // A = 2(wl + hl + hw)

    // Output the result
    printf("Surface area of the rectangular prism: %.2f\n", area);

    return 0;
}
