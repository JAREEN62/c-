#include <iostream>
using namespace std;
int main()
{
    int An,Bn,Cn,Am,Bm,Cm;
    int A[An][Am];
    int B[Bn][Bm];
    int C[Cn][Cm];
    cout<<"Enter the row size of matrix A: ";
    cin>>An;
    cout<<"Enter the coloumn size of matrix A: ";
    cin>>Am;
    cout << "enter the values of matrix A: ";
    for (int i = 0;i<An;i++)
    {
        for (int j = 0;j<Am;j++)
        {
            cin>>A[i][j];
        }
        cout << endl;
    }
    cout << "Matrix A: ";
    for (int i = 0;i<An;i++)
    {
        for (int j = 0;j<Am;j++)
        {
            cout<<A[i][j];
        }
        cout << endl;
    }
    cout << "enter the values of matrix B: ";
    for (int i = 0;i<An;i++)
    {
        for (int j = 0;j<Am;j++)
        {
            cin>>B[i][j];
        }
        cout << endl;
    }
    cout << "Matrix B: ";
    for (int i = 0;i<An;i++)
    {
        for (int j = 0;j<Am;j++)
        {
            cout<<B[i][j];
        }
        cout << endl;
    }
    cout<<"Addition of the matrix A and B is: ";
    for (int i =0;i<An;i++)
    {
        for (int j=0;j<Am;j++)
        {
            C[An][Am]=A[An][Am]+B[An][Am];
        }
        cout << endl;
    }
    return 0;
}