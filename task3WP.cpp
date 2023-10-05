#include<iostream>
#include<windows.h>
using namespace std;


void print_maze();
void gotoxy(int x, int y);

main()
{
    system("cls");
    print_maze();
    gotoxy(4,3);
    cout<<"P";
    gotoxy(0 , 10);
}
void print_maze()
{
 cout << "#######################" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#                     #" << endl;
 cout << "#######################" << endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

