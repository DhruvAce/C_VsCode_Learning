#include <stdio.h>

int main()
{
    int num, count;


    printf("Enter Number            : ");
    scanf("%d", &num);
    printf("Prime Numbers from 1 to %d are :\n", num);

    for(int i = 1; i <= num; i++)
    {
        count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count ++;
        }

        if(count > 1 && count == 2)
        {
            printf("%d ", i);
        }
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}