#include <stdio.h>
#include "validation.h"

int isValidMarks(float marksObtained, float totalMarks)
{
    if(marksObtained < 0 || totalMarks <= 0 || marksObtained > totalMarks) 
    {
        return 0;
    }

    return 1;
}
