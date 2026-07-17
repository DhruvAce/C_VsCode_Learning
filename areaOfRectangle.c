#include <stdio.h>


float calculateArea(float length, float width)
{
    return length*width;
}

int main()

{
    float length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    printf("The area of rectangle for length \"%.5f\" and width \"%.5f\" is : \"%.5f\"\n", length, width, calculateArea(length, width));

    
    return 0;
}