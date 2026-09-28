#include<iostream>
using namespace std;
class Number
{
 int x;
public:
 Number()
 {
  x=10;
 }
 
 void operator--(int)
 {
  x--;
 }
 
 void display()
 {
  cout<<"Value = "<<x<<endl;
 }
};

int main()
{
 Number n;
 cout<<"Before decrement: ";
 n.display();
 n--;
 cout<<"After postfix decrement: ";
 n.display();
 return 0;
}

