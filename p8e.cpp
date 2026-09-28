#include<iostream>
using namespace std;
class Number
{
 int x;
 
public:
 //Default Constructor
 Number()
 {
  x=0;
 }
 //Parameterized constructor
 Number(int a)
 { 
  x=a;
 }
 //Overloading + operator
 Number operator+(Number n)
 {
  Number temp;
  temp.x=x+n.x;
  return temp;
 }
 void display()
 {
  cout<<"Value of x: "<<x<<endl;
 }
};

int main()
{
 Number n1(10);
 Number n2(20);
 Number n3;
 
 n3=n1+n2;
 
 cout<<"n1: ";
 n1.display();
 
 cout<<"n2: ";
 n2.display();
 
 cout<<"n3=(n1+n2): ";
 n3.display();
 
 return 0;
}
  
