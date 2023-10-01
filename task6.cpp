# include <iostream>
void time (int hours, int minutes);
using namespace std;
main ()
{
int minutes;
int hours;
cout<<"Enter the number of hours: ";
cin>>hours;
cout<<"Enter the number of minutes: ";
cin>>minutes;
time (hours,minutes);
}
void time (int hours, int minutes)
{
int convert;
convert=hours*60;
if(convert<minutes)
cout<<minutes;
if (convert>minutes)

cout<<hours;
}