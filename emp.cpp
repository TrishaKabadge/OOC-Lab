#include<iostream>
#include<string>
using namespace std;
class Employee
{
    int empID;
    string name;
    float salary;

public:
 
    Employee()
    {
        empID=0;
        name="Unkown";
        salary=0;

    }
    Employee(int id,string n,float s)
    {
        empID=id;
        name=n;
        salary=s;
    }
    Employee(const Employee &e)
    {
        empID=e.empID;
        name=e.name;
        salary=e.salary;
    }
    void display()
    {
        cout<<"Employee ID:"<<empID<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(111,"Trisha",90000);
    Employee e3(e2);

    cout<<"Default Constructor:"<<endl;
    e1.display();

    cout<<"\nParameterized Constructor:"<<endl;
    e2.display();

    cout<<"\nCopy Constructor:"<<endl;
    e3.display();

    return 0;

}