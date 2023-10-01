#include<iostream>
void nums(int num_1,int num_2);
using namespace std;
main(){
int num_1,num_2;
cout<<"Enter the first number: ";
cin>>num_1;
cout<<"Enter the second number: ";
cin>>num_2;
nums(num_1,num_2);

}


void nums(int num_1,int num_2)
{
if(num_1==num_2){
cout<<"true";}
else{
cout<<"false";}


}