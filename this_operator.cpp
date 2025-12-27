#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length,int breadth);
        int area();
        int perimeter();
};

int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<endl;
}

Rectangle::Rectangle(int length,int breadth)
{
    this->length=length;
    this->breadth=breadth;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
