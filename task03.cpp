#include<iostream>
void Pakistan(float original_price,float discount);
void Ireland(float original_price,float discount);
void India(float original_price,float discount);
void England(float original_price,float discount);
void Canada(float original_price,float discount);
using namespace std;
main(){
float original_price,discount;
string country_name;
cout<<"Enter the country's name: ";
cin>>country_name;
cout<<"Enter the ticket price in dollars: $";
cin>>original_price;
if(country_name=="Pakistan")
Pakistan(original_price,discount);
else if(country_name=="Ireland")
Ireland(original_price,discount);
else if(country_name=="India")
India(original_price,discount);
else if(country_name=="England")
England(original_price,discount);
else
Canada(original_price,discount);

}
void Pakistan(float original_price,float discount)
{
discount=original_price-original_price*0.05;
cout<<"Final ticket price after discount: $"<<discount;
}
void Ireland(float original_price,float discount)
{
discount=original_price-original_price*0.1;
cout<<"Final ticket price after discount: $"<<discount;
}
void India(float original_price,float discount)
{
discount=original_price-original_price*0.2;
cout<<"Final ticket price after discount: $"<<discount;
}
void England(float original_price,float discount)
{
discount=original_price-original_price*0.3;
cout<<"Final ticket price after discount: $"<<discount;
}
void Canada(float original_price,float discount)
{
discount=original_price-original_price*0.45;
cout<<"Final ticket price after discount: $"<<discount;
}