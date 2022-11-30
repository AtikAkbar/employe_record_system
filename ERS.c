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
void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    // takes the curretnt given position
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

FILE *fp, *ft;


// Driver code
int main()
{

    int choice;

    // opening the file
    fp = fopen("data.txt","rb+");

    // showing error if file is unable to open
    if (fp ==  NULL)
    {
        fp = fopen("data.txt","wb+");
        if (fp = NULL)
        {
            printf("\n Cannot open file...");
            //  EXIT_FAILURE
            exit(1);
        }
    }

    // clearing console
    system("cls");
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
           "===============================\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t"
           "Developer : @Atik_Akbar_Rahat"
           "\n\n\t\t\t\t");

    // the exe file will not automaticaly close
    system("pause");
    
    while (1)
    {
        //clearing console
        system("cls");

        gotoxy(30, 10);
        printf("1. ADD RECORD\n");
        gotoxy(30, 12);
        printf("2. DELETE RECORD\n");
        gotoxy(30, 14);
        printf("3. DISPLAY RECORDS\n");
        gotoxy(30, 16);
        printf("4. MODIFY RECORD\n");
        gotoxy(30, 18);
        printf("5. EXIT\n");
        gotoxy(30, 20);
        printf("ENTER YOUR CHOICE...\n");
        // fflush(stdin);
        scanf("%d", &choice);
    }
    
    // Switch Case
    switch (choice)
    {
    case 1:
        // add the records
        addrecord();
        break;
    case 2:
        // delete the records
        deleterecord();
        break;
    case 3:
        // Display the records
        displayrecord();
        break;
    case 4:
        // Modify the records
        modifyrcord();
        break;

    case 5:
        // Closing the file
        fclose(fp);
        // EXIT_SUCCESS
        exit(0);
        break;
        
    default:
        printf("INVALID CHOICE...\n");
    }
}
