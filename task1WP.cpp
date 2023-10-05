#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
    cout<<"TEST"<<endl;

    gotoxy(15,15);

    cout<<"MY NAME IS HAMDAN_ALEEM";

}
