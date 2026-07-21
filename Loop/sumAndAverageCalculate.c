#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    float avg = 0;

    printf("Enter Num       : ");
    scanf("%d", &n);


    for(int i=1; i<=n ; i++)
    {
        sum += i;
    }

    avg = (float)sum/n;

    printf("Sum is          : %d\n", sum);
    printf("Average is      : %.1f\n", avg);

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}