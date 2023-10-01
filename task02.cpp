#include<iostream>
void Reverse(std::string true_or_false);
using namespace std;
main(){
string true_or_false;
cout<<"Enter 'true' or 'false':";
cin>>true_or_false;
Reverse(true_or_false);
}
void Reverse(std::string true_or_false)
{
if(true_or_false=="true")
cout<<"false";
if(true_or_false=="false")
cout<<"true";
}

