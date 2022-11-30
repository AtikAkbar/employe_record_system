/*Original project link: https : // www.geeksforgeeks.org/employee-record-system-in-c-using-file-handling/ */

/*
Aim of the Employee’s Record System: The user will be provided with 5 options:
    Add a new record.
    Delete a record.
    Modify a record.
    View all the records.
    Exit.

Data of the Employees:
    Name.
    Age.
    Salary.
    Employee ID.
*/

// start of program 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// structure for the employee
// struct emp {
//     char name[50];
//     float salary;
//     int age;
//     int id;
// };
// struct emp e;

// //size of the structure
// long int size = sizeof(e);

// // in the start coordinate will be (0,0)
// COORD cord = {0,0};

// // function to set coordinates 
// void gotoxy(int x, int y)
// {
//     cord.X = x;
//     cord.Y = y;
//     SetConsoleCursorPosition(
//         GetStdHandle(STD_OUTPUT_HANDLE),cord);
// }

FILE *fp, *ft;


// Driver code
int main()
{

    // int choice;

    // opening the file
    // fp = fopen("data.txt","rb+");

    // showing error if file is unable to open
    // if (fp ==  NULL)
    // {
    //     fp = fopen("data.txt","wb+");
    //     if (fp = NULL)
    //     {
    //         printf("\n Cannot open file...");
    //         //  EXIT_FAILURE
    //         exit(1);
    //     } 
    // }
     
    //  colors in console
    system("Color 3F");
    printf("\n\n\n\n\t\t\t\t============="
           "============================="
           "===========");
    printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~");
    printf("\n\t\t\t\t==================="
           "============================="
           "=====");
    printf("\n\t\t\t\t[|:::>:::>:::>::>  "
           "EMPLOYEE RECORD  <::<:::<:::"
           "<:::|]\t");
    printf("\n\t\t\t\t==================="
           "============================="
           "=====");
    printf("\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~");
    printf("\n\t\t\t\t====================="
           "==============================\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t"
           "Developer : @Atik_Akbar_Rahat"
           "\n\n\t\t\t\t");

    // the exe file will not automaticaly close

    // getchar();



}
