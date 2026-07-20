#include <stdio.h>

int main()
{
    int a, b;
    char operator;

    printf("Enter 1st Num               : ");
    scanf("%d", &a);

    printf("Select operator             : ");
    scanf(" %c", &operator);

    printf("Enter 2nd Num               : ");
    scanf("%d", &b); 


    switch (operator)
    {
    case '+':
        printf("Sum of %d and %d is         : %d\n", a, b, (a+b));
        break;

    case '-':
        printf("Subtract of %d and %d is    : %d\n", a, b, (a-b));
        break;  
        
    case '*':
        printf("Multiply of %d and %d is    : %d\n", a, b, (a*b));
        break;

    case '/':
        printf("Division of %d and %d is    : %.d\n", a, b, (a/b));
        break;

    case '%':
        printf("Product of %d and %d is     : %d\n", a, b, (a%b));
        break;

    default:
        printf("Invalid Operator Select '+ '-' '*' '/' '%%'\n");
        break;
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  
    

    return 0;
}