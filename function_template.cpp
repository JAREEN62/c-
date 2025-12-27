#include<iostream>
using namespace std;

template<class t>

t maxim(t x,t y)
{
    return x>y?x:y;
}

int main()
{
    cout<<maxim(10,5)<<endl;
    cout<<maxim(10.5f,6.9f)<<endl;
    cout<<maxim(10.5,6.9)<<endl;

    return 0;
}