#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float HRA;
    float DA;

public:
    // Constructor
    Employee(int id, string name, float basic, float hra, float da)
    {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    // Calculate Gross Salary
    float calculateGrossSalary()
    {
        return basicSalary + HRA + DA;
    }

    // Display Employee Details
    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "HRA : " << HRA << endl;
        cout << "DA : " << DA << endl;
        cout << "Gross Salary : " << calculateGrossSalary() << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main()
{
    Employee emp(101, "ABC", 90000, 6000, 2000);

    emp.display();

    return 0;
}

/*
Employee Details
Employee ID : 101
Employee Name : ABC
Basic Salary : 90000
HRA : 6000
DA : 2000
Gross Salary : 98000

Employee object destroyed.
*/
