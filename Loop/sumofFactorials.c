#include <stdio.h>


int main()
{
    int n;
    int fact = 1, sum = 0;

    printf("Enter Value         : ");
    scanf("%d", &n);

    for(int j = 1; j <= n; j++)
    {
        fact = 1;
        for(int i = j; i >= 1; i--)
        {
            fact *= i;
        }
        if(j != n)
        {
            printf("%d! + ", j);
        }
        else
        {
            printf("%d! ", j);
        }
        sum += fact;
    }

    printf("= %d\n", sum);

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  



    return 0;
}