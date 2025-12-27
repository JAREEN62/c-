#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l);
    void setBreadth(int b);
    int getLength();  //{return length;} can be elaborated here
    int getBreadth(); //{return breadth;}
    int area();
    int perimeter();
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    bool isSquare();
    ~Rectangle();
};
int main()
{
    Rectangle r(10, 10);
    //Rectangle r2(r);
    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    if (r.isSquare())
        cout << "Yes" << endl;
}

void Rectangle::setLength(int l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}

void Rectangle::setBreadth(int b)
{
    if (b >= 0)
        breadth = b;
    else
        breadth = 0;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
}
Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle is Destroyed!";
}