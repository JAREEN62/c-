#include<iostream>
using namespace std;

int sum(int x,int y,int z=0)
{
    return x+y+z;
}

int max(int x=0,int y=0,int z=0)
{
    return x>y && x>z ? x:(y>z?y:z);
}

// int main()
// {
//     cout<<sum(10,5)<<endl;
//     cout<<sum(11,12,13)<<endl;
//     return 0;
// }

int main()
{
    cout<<max()<<endl;
    cout<<max(1)<<endl;
    cout<<max(10,13)<<endl;
    cout<<max(2,12,1)<<endl;
    return 0;
}