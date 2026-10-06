/*
An Armstrong number is a number where 
the sum of the cubes of its individual 
digits equals the number itself
*/

#include <stdio.h>
#include <math.h>



int main()
{
    int n, count = 0, sum = 0;

    printf("Enter Number     : ");
    scanf("%d", &n);

    int copy = n; // to save original n value

    while(n > 0) //to get count of digits for power
    {
        count++;
        n /= 10;
    }

    n = copy; // revberting original value from copy to n as n became 0

    while(n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, count); 
        n /= 10;
    }

    printf("The Sum of value    : %d\n", sum);
    printf(sum == copy ? "It is a Armstrong Number\n" : "It is not a Armstrong Number\n");

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}