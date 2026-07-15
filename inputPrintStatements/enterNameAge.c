#include <stdio.h>


void details()
{
    char name[50];
    char gender;
    int age;

    printf("Enter your name: ");
    scanf(" %49s", &name);

    printf("Enter your gender \"M/F\": ");
    scanf(" %c", &gender);

    printf("Enter your age: ");
    scanf(" %d", &age);

    printf("hello \"%s\" here are your details \"%c\" and \"%d\" years old", name, gender, age);
}
    
int main()
{
    details(); 

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter

    return 0;
    
}