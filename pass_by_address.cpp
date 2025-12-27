#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout<<"given: "<<a<<" "<<b<<endl;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"swapped: "<<a<<" "<<b<<endl;
}
int main()
{
    int x = 2,y = 5;
    swap(&x,&y);
    cout<<"final: "<<x<<" "<<y<<endl;
    return 0;
}