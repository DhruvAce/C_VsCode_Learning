#include <stdio.h>

int main()
{

    int num;

    printf("Enter Number    : ");
    scanf("%d, &num");

    if(num %2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter 

    return 0;
}