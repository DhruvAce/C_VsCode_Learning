#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter 1st num   : ");
    scanf("%d", &a);
    printf("Enter 2nd num   : ");
    scanf("%d", &b);

    if(a > b)
    {
        printf("%d > %d \n", a, b);
    }
    else if(b > a)
    {
        printf("%d < %d \n", a, b);
    }
    else if(a == b)
    {
        printf("%d == %d Its equal", a, b);
    }
    else
    {
        printf("Invalid");
    }
    
    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter 

    return 0; 
}