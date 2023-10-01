# include <iostream>
void bonus(int my_position,int friend_position);
using namespace std;
main ()
{
int my_position;
int friend_position;

cout<<"Enter your position: ";
cin>>my_position;
cout<<"Enter your friend's position: ";
cin>>friend_position;
bonus (my_position,friend_position);
}
void bonus(int my_position, int friend_position)
{
if (friend_position-my_position>6)
cout<<"false";
if (friend_position-my_position<=6)
cout<<"true";
}