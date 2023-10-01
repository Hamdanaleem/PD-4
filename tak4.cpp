# include <iostream>
void check_speed (int speed);
using namespace std;
main ()
{
int speed;
cout<<"Speed: ";
cin>>speed;
check_speed(speed);
}
void check_speed (int speed)
{
if (speed>100)
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
if (speed<=100)
cout<<"Perfect! You're going good.";
}