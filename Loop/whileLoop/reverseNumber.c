/*
Reversing the Number & Checking is it palidrome number

A palindrome number is a number that remains 
the same when its digits are reversed
*/


#include <stdio.h>

int main()
{
    int n, reverse = 0;
    
    printf("Enter a Value           : ");
    scanf("%d", &n);
    
    int copy = n; // saving original n number to resuse it
    
    while(n != 0)
    {
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit; 
        n/=10;
    }

    printf("Reversed Number         : %d\n", reverse);

    printf("Original Number         : %d\n", copy);
    printf(reverse == copy ? "The Number is Palindrome\n" : "The Number is Not a Palindrome\n");

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}