#include<iostream>
using namespace std;
class Number{
int x;

public:
  Number()
  {
    x=10;
  }
  
  void operator++()
  {
    ++x;
  }
    
  void display()
  {
    cout<<"Value= "<<x<<endl;
  }
};

int main()
{
  Number n;
  cout<<"Before increment: ";
  n.display();
  ++n;
  cout<<"After prefix increment: ";
  n.display();
  return 0;
}
   
 
  
