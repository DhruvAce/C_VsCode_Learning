#include <stdio.h>

int main()
{
    int n;

    printf("Enter Loop Num      : ");
    scanf("%d", &n);
    
    for(int i=n; i>=1; i--)
    {
        printf("%d\n", i);
    }
    
    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  

    return 0;
}