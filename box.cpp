#include <iostream>
using namespace std;

class Box
{
private:
    float length, width, height;

public:
    // Default Constructor
    Box()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    // Parameterized Constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    // Calculate Volume
    float volume()
    {
        return length * width * height;
    }

    // Display Object Information
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << volume() << endl;
        cout << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called. Box object destroyed." << endl;
    }
};

int main()
{
    // Object using Default Constructor
    Box box1;
    cout << "Box 1 (Default Constructor):" << endl;
    box1.display();

    // Object using Parameterized Constructor
    Box box2(10, 5, 4);
    cout << "Box 2 (Parameterized Constructor):" << endl;
    box2.display();

    // Object using Copy Constructor
    Box box3(box2);
    cout << "Box 3 (Copy Constructor):" << endl;
    box3.display();

    return 0;
}

/*
Box 1 (Default Constructor):
Length : 0
Width : 0
Height : 0
Volume : 0

Box 2 (Parameterized Constructor):
Length : 10
Width : 5
Height : 4
Volume : 200

Box 3 (Copy Constructor):
Length : 10
Width : 5
Height : 4
Volume : 200

Destructor called. Box object destroyed.
Destructor called. Box object destroyed.
Destructor called. Box object destroyed.
*/
