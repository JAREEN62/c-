#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;

    cout<<x<<endl;
    x++;
    y++;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
    return 0;
}
/* {
    int A[5]={2,3,4,5,6};
    int *p = A,*q = &A[4];
    
    cout<<q -p<<endl;
    return 0; 
}  */

/* {
    int A[5]={2,3,4,5,6};
    int *p = A;
    cout<<p<<endl;
    for(int i = 0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;
    return 0;
} */
/* {
    int size;
   
    int *p = new int[10];
    cout<<*p<<endl;

    delete []p;
    p = nullptr;

   
    p = new int[20];
    cout<<p<<endl;

    delete []p;
    p = nullptr;

    return 0;
} */
/* {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int A[size];
    cout<<sizeof A<<endl;
    return 0;
} */
/* {
    int *p = new int[6];
    p[0]=1;
    p[1]=2;
    p[2]=3;

    cout<<p[2]<<endl;

    delete []p;
    p=nullptr;
    return 0;
}
 */