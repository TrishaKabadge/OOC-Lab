#include<iostream>
using namespace std;
class Shape
{
public:
  virtual void area()
  {
    cout<<"Area of Shape"<<endl;
  }
};
class Circle:public Shape
{
  float r;
public:
  Circle(float radius)
  {
    r=radius;
  }
  void area() override
  {
    cout<<"Area of Circle="<<3.14*r*r<<endl;
  }
};
class Rectangle:public Shape
{
  float l,b;
public:
  Rectangle(float length,float breadth)
  {
    l=length;
    b=breadth;
  }
  void area() override
  {
    cout<<"Area of Rectangle="<<l*b<<endl;
  }
};
int main()
{
  Circle c(10.5);
  Rectangle r(2,5);
  
  c.area();
  r.area();
  
  return 0;
}

