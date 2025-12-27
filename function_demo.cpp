#include <iostream>
using namespace std;

// float maxim(int a, int b,int c)
// {
//     if(a>b && a>c)
//         return a;
    
//     else if (b>c)
//         return b;

//     else
//         return c;
// }

// int main()
// {
//     float x=6.4,y=7.6,z = 1,r;
//     r = maxim(x,y,z);
//     cout<<r<<endl;
//     return 0;
// }

float add(int a, int b, int c)
{
    float n;
    n = a+b+c;
    return n;
}

int main()
{
    float x,y,z,m;
    cout<<"x,y,z: ";
    cin>>x>>y>>z;
    m = add(x,y,z);
    cout<<m<<endl;
    return 0;
}