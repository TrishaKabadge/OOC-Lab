#include<iostream>
using namespace std;
class Rectangle
{
    float length,breadth;

public:
    
    Rectangle()
    {
        length=0;
        breadth=0;
    }

    Rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }

    Rectangle(const Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

    void calculateArea()
    {
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Area:"<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10,5);
    Rectangle r3(r2);

    cout<<"Default Constructor:"<<endl;
    r1.calculateArea();

    cout<<"\nParameterized Constructor:"<<endl;
    r2.calculateArea();

    cout<<"\nCopy Constructor:"<<endl;
    r3.calculateArea();

    return 0;
}