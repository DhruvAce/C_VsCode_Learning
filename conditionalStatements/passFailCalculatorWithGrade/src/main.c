#include <stdio.h>
#include "input.h"
#include "percentage.h"
#include "grade.h"
#include "validation.h"
#include "displayResult.h"


int main()
{
    float marksObtained;
    float totalMarks;
    float percentage;
    float passingMarks = 33.0f;

    
    getMarks(&marksObtained, &totalMarks); //input.c input.h

    if(!isValidMarks(marksObtained, totalMarks)) //validation.c validation.h
    {
        printf("Invalid marks entered!\n");
        
            printf("\nPress Enter to exit...");
            getchar(); // Consumes the Enter left by scanf
            getchar(); // Waits for you to press Enter 
        return 0;
    }
    
    percentage = percentCalculate(marksObtained, totalMarks); //percentage.c percentage.h

    displayResult(percentage); //displayResult.c displayResult.h

    printf("\nPress Enter to exit...");
    getchar(); // Consumes the Enter left by scanf
    getchar(); // Waits for you to press Enter 

    return 0;
}