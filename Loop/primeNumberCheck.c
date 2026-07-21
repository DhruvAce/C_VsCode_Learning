#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter Number            : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }

    if(count > 1 && count == 2)
        printf("Yes, %d is a Prime Number\n", num);
    else
        printf("No, %d is not a Prime Number\n", num);

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}