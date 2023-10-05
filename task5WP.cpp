#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
    gotoxy(25,10);

    cout<<"HAMDAN_ALEEM";
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
