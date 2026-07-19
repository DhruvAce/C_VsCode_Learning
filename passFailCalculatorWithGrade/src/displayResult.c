#include <stdio.h>
#include "displayResult.h"
#include "grade.h"

void displayResult(float percentage)
{
    printf("\n---------------------------\n");
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 33)
    {
        printf("Result     : PASS\n");
    }
    else
    {
        printf("Result     : FAIL\n");
    }

    printf("Grade      : %s\n", calculateGrade(percentage)); //grade.c grade.h
    printf("---------------------------\n"); 
}