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
struct emp {
    char name[50];
    float salary;
    int age;
    int id;
};
struct emp e;

//size of the structure
long int size = sizeof(e);

