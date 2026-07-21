#include <stdio.h>

int main()
{
    int a, b;
    int pow = 1;

    printf("Enter 1st value      : ");
    scanf("%d", &a);
    printf("Enter 2nd value      : ");
    scanf("%d", &b);

    for(int i = 1; i<=b ; i++)
    {
        pow *= a;
    }

    printf("Value of Power is    : %d", pow);

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  


    return 0;
}