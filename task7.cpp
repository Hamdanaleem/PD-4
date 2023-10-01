# include <iostream>
void flower_shop(int red_rose, int white_rose, int tulip);
using namespace std;
main ()
{
int red_rose;
int white_rose;
int tulip;
cout<<"Red Rose: ";
cin>>rose;
cout<<"White Rose: ";
cin>>white_rose;
cout<<"Tulips: ";
cin>>tulip;
flower_shop(red_rose,white_rose,tulip);
}
void flower_shop(int red_rose, int white_rose, int tulip)
{
float rose_price;
float white_price;
float tulip_price;
float total_price;
float disc;
float flower_price;
rose_price=2.00*rose;
white_price=4.10*w_rose;
tulip_price=2.50*tuli;
total_price=rose_price+white_price+tulip_price;
if(total>200)
{
disc=(total/100)*20;
flower_price=total-disc;
cout<<"Original Price: $"<<total_price<<endl;
cout<<"Price after Discount: $"<<flower_price;
}
if (total<=200)
{
cout<<"Original Price: $"<<total_price<<endl;
cout<<"No discount applied.";
}


}