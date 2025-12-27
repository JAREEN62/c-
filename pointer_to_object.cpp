#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

// pointer to object in stack
int main()
{
    Rectangle r;
    Rectangle *p;
    p = &r;
    p->length = 15;
    p->breadth = 10;
    cout<<"Area : "<<p->area()<<endl;
    cout<<"perimeter : "<<p->perimeter()<<endl;
}

// creating object in heap using pointer

int main()
{
    Rectangle *p = new Rectangle();
    p->length = 15;
    p->breadth = 10;
    cout<<"Area : "<<p->area()<<endl;
    cout<<"perimeter : "<<p->perimeter()<<endl;
}