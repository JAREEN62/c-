#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Mutators
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    // accessors
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    //Facilitators
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 + (length * breadth);
    }

    // Non-parameterized constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // parameterized constructor
    Rectangle(int l=1, int b=1)
    {
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }

};

int main()
{
    // Rectangle r;
    // cout<<r.area()<<endl;
    
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    
    Rectangle r2(r);
    cout<<r2.area()<<endl;
}