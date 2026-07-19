#include <stdio.h>

int main()
{
    char word;


    printf("Enter a single letter   : ");
    scanf("%c", &word);

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u')
    {
        printf("%c is a vowel\n", word);
    }
    else
    {
        printf("%c is a consonant\n", word);
    }

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter 

    return 0;
}