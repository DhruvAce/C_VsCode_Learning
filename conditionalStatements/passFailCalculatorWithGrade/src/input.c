#include <stdio.h>
#include "input.h"

void getMarks(float * marksObtained, float * totalMarks)
{
    printf("Marks obtained      : ");
    scanf("%f", marksObtained);
    
    printf("Out of              : ");
    scanf("%f", totalMarks);
}