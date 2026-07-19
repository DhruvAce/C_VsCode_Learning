#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define PI 3.14159265f

#pragma region Clear Screen Function

    void clearScreen()
    {
        system("cls");
    }

#pragma endregion

#pragma region Colours Function

    void green() // green colour function to show success
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    }

    void red() // red colour function to show Error 
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    }

    void white() // white colour function to show normal text
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    }

#pragma endregion

#pragma region Print Line Function

    //Prints lines
    void printSingleLine() // prints single lines easily
    {
        printf("-----------------------------------------\n");
    }

    void printDoubleLine() // prints double lines easily
    {
        printf("=========================================\n");
    }

#pragma endregion

#pragma region Title Function

    void printTitle(char title[])
    {
            green();
        
        printDoubleLine();
        printf("                %s \n", title);
        printDoubleLine();

            white();
    }


#pragma endregion

#pragma region Results Function

    void results()
    {
        printf("\n");
        printTitle("RESULTS");
    }

#pragma endregion

#pragma region Choice Function

    int getMenuChoice()
    {
        int mainMenu;
        
            green();

        printDoubleLine();
        printf("\t   GEOMETRY CALCULATOR\n");
        printDoubleLine();

        printf(" Version : 1.0 || Author  : Dhruv Panchal\n");
        printSingleLine();


        printf("\n");

            white();

        printf("[1] Rectangle\n");
        printf("[2] Circle\n");   
        printf("[3] Triangle\n");

        printSingleLine();
        
            red();

        printf("[4] Exit\n");

            white();

        printf("\n");

        printf("Choice: ");

        scanf("%d", &mainMenu);

        return mainMenu;
    }

#pragma endregion

#pragma region Exit Function

    //Exit Function
    void exitProgram()
    {   
            red();

        printf("\n");
        printSingleLine();
        printf("             Enter to exit...\n");
        printSingleLine();

            white();

        getchar(); // Consumes the Enter left by scanf
        getchar(); // Waits for you to press Enter
    }

#pragma endregion

#pragma region Pause Program Function

    //pause the panel until enter click
    void pauseProgram()
    {
        printf("\n");


            red();

        printSingleLine();
        printf("           Enter for Main Menu...\n");
        printSingleLine();

            white();


        getchar(); // Consumes the Enter left by scanf
        getchar(); // Waits for you to press Enter

        printf("\n");

        clearScreen();
    }


#pragma endregion

#pragma region printError Function

    void printError()
    {
            red();

        printDoubleLine();
        printf("                Error \n");
        printf("     Value must be greater than 0.\n");

            white();

        pauseProgram();

         return;
    }

#pragma endregion

#pragma region Rectangle Functions

    //Rectangle Functions
    float areaOfRectangle(float rectLength, float rectWidth) 
    {
        return rectLength * rectWidth;
    }

    float perimeterOfRectangle(float rectLength, float rectWidth)
    {
        return 2 *(rectLength + rectWidth);
    }

    void rectangleMenu()
    {
        clearScreen();
        
        printTitle("RECTANGLE");

        float rectLength, rectWidth;

        printf("Length          : ");
        scanf("%f", &rectLength);

        printf("Width           : ");
        scanf("%f", &rectWidth);

        if (rectLength <= 0 || rectWidth <= 0)
        {
           printError();
           return;
        }

        
        results();

                green(); 
            
            printf("Area        : %.2f\n", areaOfRectangle(rectLength, rectWidth));
            printf("Perimeter   : %.2f\n", perimeterOfRectangle(rectLength, rectWidth));

                white();

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
    clearScreen();

    printTitle("CIRCLE");
    
    float radius;

    printf("Radius          : ");
    scanf("%f", &radius);

    if(radius <= 0)
    {   
        printError();
        return;
    }
    
    results();

        green();
        

    printf("Area            : %.2f\n", areaOfCircle(radius));
    printf("Circumference   : %.2f\n", circumferenceOfCircle(radius));

        white();


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
    clearScreen();

    printTitle("TRIANGLE");

    float base, height;

    printf("Base        : ");
    scanf("%f", &base);

    printf("Height      : ");
    scanf("%f", &height);

    if(base <= 0 || height <= 0)
    {
        printError();
        return;
    }

    results();

        green();

    printf("Area         : %.2f\n", areaOfTriangle(base, height));

        white();


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
            red();
            printDoubleLine();
            printf("             Invalid choice.\n");
            printf("          Please select 1 - 4\n");
            white();

            pauseProgram();
            
            break;
    }
    }
    while(mainMenu != 4);


    return 0;
}
#pragma endregion