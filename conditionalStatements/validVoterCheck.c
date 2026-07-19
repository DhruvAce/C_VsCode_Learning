#include <stdio.h>

int main()
{
    char name[50];
    int age;
    int remainingAge;

    printf("Name    : ");
    scanf("%49s", &name);

    printf("Age     : ");
    scanf(" %d", &age);

    remainingAge = 18 - age;

    if(age >= 18)
    {
        printf("Hello %s your age is %d\n", name, age);
        printf("You are a valid voter\n");
    }
    else
    {
        printf("Hello %s your age is %d\n", name, age);
        printf("You are a not a valid voter\n");
        printf("You can vote after %d years\n", remainingAge);
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter

    return 0;
}