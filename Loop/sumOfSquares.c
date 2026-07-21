#include <stdio.h>

int main()
{
    int n;
    int sum = 0, square;


    printf("Enter Value         : ");
    scanf("%d", &n);

    for(int j = 1; j <= n; j++)
    {    
        square = j * j;
        sum += square;
        
        printf("%d^2", j);
        
        if(j != n)
            printf(" + ");
    }
    
    printf(" = %d\n", sum);

     printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter  
    
    return 0;
}