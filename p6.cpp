#include <iostream>
using namespace std;

class Area
{
public:
    void area(int side)
    {
        cout << "Area of square = " << side * side;
    }

    void area(int length, int breadth)
    {
        cout << "Area of rectangle = " << length * breadth;
    }

    void area(float radius)
    {
        cout << "Area of circle = " << 3.14 * radius * radius;
    }
};

int main()
{
    Area a;

    a.area(5);
    cout << endl;

    a.area(10, 5);
    cout << endl;

    a.area(3.5f);

    return 0;
}
