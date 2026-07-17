#include <stdio.h>
#define PI 3.14159265f

float calculateArea(float radius)
{
    return PI * radius * radius;
}

float calculateCircumference(float radius)
{
    return 2 * PI * radius;
}

int main()
{
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    printf("The area of circle for radius \"%.5f\" is: \"%.5f\" \n", radius, calculateArea(radius));
    printf("The circumference of circle for radius \"%.5f\" is: \"%.5f\" \n", radius, calculateCircumference(radius));

    
    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  
    
    return 0;
}