#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter Number            : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {   
        if(num % i == 0)
        {    sum += i;
            
            if(i != num)
                printf("%d + ", i);
            else
                printf("%d", i);
        }
    } 

    printf(" = %d\n", sum);

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}