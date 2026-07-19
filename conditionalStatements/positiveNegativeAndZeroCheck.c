#include <stdio.h>

int main()
{
    int num;

    printf("Enter Number    : ");

    if(scanf("%d", &num) != 1)
    {
        printf("Invalid Input\n");
        
        printf("\nPress Enter to exit...");
        getchar(); // Consumes the Enter left by scanf
        getchar(); // Waits for you to press Enter

        return 0;
    }

    if(num > 0)
    {
        printf("Positive\n");
    }
    else if(num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter


    return 0;
}