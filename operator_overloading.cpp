#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c3 = c1 + c2;
    return 0;
}