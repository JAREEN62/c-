#include   <iostream>
using namespace std;

int main()

{
    char x = 'A';
    char *charptr = &x;
    int *intptr = (int*)charptr;
    cout<<"x: "<<x<<endl; // x: A
    cout<<"&x: "<<&x<<endl; // &x: 0x7ffebc3b3f7c
    cout<<"*charptr: "<<*charptr<<endl; // *charptr: A
    cout<<"*intptr: "<<*intptr<<endl; // *intptr: 65
    cout<<"charptr: "<<charptr<<endl; // charptr: A
    cout<<"intptr: "<<intptr<<endl; // intptr: 0x7ffebc3b3f7c
    cout<<"&charptr: "<<&charptr<<endl; // &charptr: 0x7ffebc3b3f70
    cout<<"&intptr: "<<&intptr<<endl; // &intptr: 0x7ffebc3b3f68
    cout<<"sizeof(char): "<<sizeof(char)<<endl; // sizeof(char): 1
    cout<<"sizeof(int): "<<sizeof(int)<<endl; // sizeof(int): 4


    return 0;
}