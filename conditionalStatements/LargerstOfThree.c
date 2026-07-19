#include <stdio.h>

int main()
{
    int a, b, c;

    printf("First Num       : ");
    scanf("%d", &a);

    printf("Second Num      : ");
    scanf("%d", &b);

    printf("Third Num       : ");
    scanf("%d", &c);    

    if(a > b && a > c)
    {
        printf("First Num %d is Largest of three", a);
    }
    else if(b > a && b > c)
    {
        printf("Second Num %d is Largest of three", b);
    }
    else
    {
        printf("Third Num %d is Largest of three", c);
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter 

    return 0;
}