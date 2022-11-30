// C program to get current cursor position from output screen

#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    // takes the curretnt given position
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}



void main()
{
    system("cls");
    int x,y;

    printf("Enter the position of cursor x, y: ");
    scanf("%d%d",&x,&y);
    
    gotoxy(x,y);
    printf("Hello!");
    system("pause");
    // getchar();
    // // print current location of x.
    // printf("Current location of x is : %d\n", wherex());

    // // print current locatin of y.
    // printf("Current location of y is : %d", wherey());
}