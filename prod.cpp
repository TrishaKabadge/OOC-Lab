#include<iostream>
#include<string>
using namespace std;
class Product
{
    int productID;
    string name;
    float price;

public:
  
     Product()
     {
        productID=0;
        name="Unknown";
        price=0;
     }

     Product(int id,string n,float p)
     {
        productID=id;
        name=n;
        price=p;
     }

     void display()
     {
        cout<<"Product ID:"<<productID<<endl;
        cout<<"Product Name:"<<name<<endl;
        cout<<"Price:"<<price<<endl;

     }
};

int main()
{
    Product p1;
    Product p2(111,"Laptop",68000);
    Product p3(119,"Phone",17000);
    cout<<"Product 1:"<<endl;
    p1.display();
    cout<<"\nProduct 2:"<<endl;
    p2.display();
    cout<<"\nProduct 3:"<<endl;
    p3.display();

    return 0;

}