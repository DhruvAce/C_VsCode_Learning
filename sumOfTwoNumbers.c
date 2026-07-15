#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}



int main()
{
    int a, b;

    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    printf("the sum of %d and %d is: %d\n", a, b, sum(a, b));

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter

    return 0;

}