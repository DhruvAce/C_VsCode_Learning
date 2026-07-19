#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter 1st num   : ");
    scanf("%d", &a);
    printf("Enter 2nd num   : ");
    scanf("%d", &b);

    if(a == b)
    {
        printf("Its a Equal Number \n");
    }
    else
    {
        printf("Not Equal Number \n");
    }

    return 0;
}