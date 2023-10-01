# include <iostream>
void tp_checker(int people,int tissue_paper);
using namespace std;
main ()
{
int people;
int tissue_paper;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tissue_paper;
tp_checker(people,tissue_paper);
}
void tp_checker(int people,int tissue_paper)
{
int sheet = tissue_paper*500;
int upday = 57*people;
int tissue_usage=upday*14;
int available = sheet/upday;
if (sheet>tissue_usage)
cout<<"Your TP will last "<<available<<" days, no need to panic!";
if (sheet<tissue_usage)
cout<<"Your TP will only last "<<available<<" days, buy more!";
}