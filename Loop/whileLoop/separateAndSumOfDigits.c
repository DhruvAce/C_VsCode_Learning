#include <stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter a value       : ");
    scanf("%d", &n);

    while(n!=0)
    {
        //last digit of the number
        int lastDigit = n%10;
        sum+=lastDigit;
        printf("%d\n", lastDigit);
        
        //remove last digit from the number
        n/=10;
    }
    printf("Sum of digits is : %d\n", sum);


    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}