# include <iostream>
void pet (int holidays);
using namespace std;
main ()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}
void pet (int holidays)
{
int time;
int working_days;
int t1;
int hours;
int minutes;
working_days=365-holidays;
time=(working_days*63)+(holidays*127);
if (time<30000)
{
t1=30000-time;
hours=t1/60;
minutes=t1%60;
cout<<"Tom sleeps well"<<endl;
cout<<hours<<" hours and "<<minutes<<" minutes less for play";
}
if (time>30000)
{
t1=time-30000;
hours=t1/60;
minutes=t1%60;
cout<<"Tom will run away"<<endl;
cout<<hours<<" hours and "<<minutes<<" minutes for play";
}
}