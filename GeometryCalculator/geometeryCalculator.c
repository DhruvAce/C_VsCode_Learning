#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265f


#pragma region Choice Function
    int getMenuChoice()
    {
        int mainMenu;
        printf("===== Geometry Calculator =====\n");
        printf("\n");
        printf("1. Area and Perimeter of Rectangle\n");
        printf("2. Area and Circumference of Circle\n");   
        printf("3. Area of Triangle\n");
        printf("4. Exit\n");
        printf("\n");
        printf("Enter your choice: ");

        scanf("%d", &mainMenu);

        return mainMenu;
    }

#pragma endregion

#pragma region Exit Function

    //Exit Function
    void exitProgram()
    {
        printf("\nPress Enter to exit...");
        getchar(); // Consumes the Enter left by scanf
        getchar(); // Waits for you to press Enter
    }

#pragma endregion

#pragma region Pause Program Function

    //pause the panel until enter click
    void pauseProgram()
    {
        printf("\nPress Enter to return to Main Menu...");
        getchar(); // Consumes the Enter left by scanf
        getchar(); // Waits for you to press Enter

        printf("\n");

        system("cls");
    }


#pragma endregion

#pragma region Rectangle Functions

    //Rectangle Functions
    float areaOfRectangle(float rlength, float rwidth)
    {
        return rlength * rwidth;
    }

    float perimeterOfRectangle(float rlength, float rwidth)
    {
        return 2 *(rlength + rwidth);
    }

    void rectangleMenu()
    {
        float rlength, rwidth;

        printf("Enter the length: ");
        scanf("%f", &rlength);

        printf("Enter the width: ");
        scanf("%f", &rwidth);

        if (rlength <= 0 || rwidth <= 0)
        {
            printf("\nError: Length and width must be greater than 0.\n");
            pauseProgram();
            return;
        }

            printf("\nRectangle\n");
            printf("------------------------\n");
            printf("Length      : %.2f\n", rlength);
            printf("Width       : %.2f\n", rwidth);
            printf("Area        : %.2f\n", areaOfRectangle(rlength, rwidth));
            printf("Perimeter   : %.2f\n", perimeterOfRectangle(rlength, rwidth));

            pauseProgram();
  
    }

#pragma endregion

#pragma region Circle Functions

//Circle Functions
float areaOfCircle(float radius)
{
    return PI * radius * radius;
}

float circumferenceOfCircle(float radius)
{
    return 2 * PI * radius;
}

void circleMenu()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("\nCircle\n");
    printf("------------------------\n");
    printf("Radius          : %.2f\n", radius);
    printf("Area            : %.2f\n", areaOfCircle(radius));
    printf("Circumference   : %.2f\n", circumferenceOfCircle(radius));

    pauseProgram();
}

#pragma endregion

#pragma region Triangle Functions

//Triangle Functions
float areaOfTriangle(float base, float height)
{
    return 0.5f * base * height;
}

void triangleMenu()
{
    float base, height;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("\nTriangle\n");
    printf("------------------------\n");
    printf("Base         : %.2f\n", base);
    printf("Height       : %.2f\n", height);
    printf("Area         : %.2f\n", areaOfTriangle(base, height));

    pauseProgram();
}

#pragma endregion

#pragma region Main Function

//Main Function
int main()
{


    int mainMenu;

    do
    {
        mainMenu = getMenuChoice();

        switch (mainMenu)
    {
        case 1:
            //code for rectangle
            rectangleMenu();
            break;

        case 2:
            //code for circle
            circleMenu();
            break;

        case 3:
            triangleMenu();
            break;
        
        case 4:
            exitProgram();
            return 0;
        
        default:
            printf("Invalid choice. Please select a valid option.\n");
            pauseProgram();
            
            break;
    }
    }
    while(mainMenu != 4);


    return 0;
}
#pragma endregion