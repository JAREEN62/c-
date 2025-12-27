#include <iostream>
using namespace std;
int main()
{
    int An, Am,Bn,Bm,Cn,Cm;
    int A[100][100];
    int B[100][100];
    int C[100][100];

    cout << "Enter the row size of matrix A: ";
    cin >> An;
    cout << "Enter the coloumn size of matrix A: ";
    cin >> Am;
    cout << "enter the values of matrix A: ";
    for (int i = 0; i < Am; i++)
    {
        for (int j = 0; j < An; j++)
        {
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "Matrix A: ";
    for (int i = 0; i < Am; i++)
    {
        for (int j = 0; j < An; j++)
        {
            cout << A[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "Enter the row size of matrix B: ";
    cin >> Bn;
    cout << "Enter the coloumn size of matrix B: ";
    cin >> Bm;
    cout << "enter the values of matrix B: ";
    for (int i = 0; i < Am; i++)
    {
        for (int j = 0; j < An; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "Matrix B: ";
    for (int i = 0; i < Am; i++)
    {
        for (int j = 0; j < An; j++)
        {
            cout << B[i][j]<<" ";
        }
        cout << endl;
    }

    cout << "Addition of the matrix A and B is: ";
    for (int i = 0; i < Am; i++)
    {
        for (int j = 0; j < An; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < Am; i++)
    {
        for (int j = 0; j < An; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
/* 
int main()
{
    int A[2][3];
    int B[2][3];
    int C[2][3];
    cout << "enter the values of matrix A: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << "Matrix A: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the values of matrix B: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "Matrix B: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "Addition of the matrix A and B is: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
} */