#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    int A[100][100];
    int B[100][100];
    int M[100][100];

    cout << "Enter the row size of matrix A: ";
    cin >> r1;
    cout << "Enter the coloumn size of matrix A: ";
    cin >> c1;

    cout << "Enter the row size of matrix B: ";
    cin >> r2;
    cout << "Enter the coloumn size of matrix B: ";
    cin >> c2;

    while (c1 != r2)
    {
        cout<<endl<<"""Multiplication"<<" "<<"is not possible!\nColumns of the first matrix ["<<c1<<"] is not equal to the rows ["<<r2<<"] of the second matrix!\n\nEnter the details again!\n"""<<endl;
        /* cout<<"Columns of the first matrix ["<<c1<<"] is not equal to the rows ["<<r2<<"] of the second matrix!\nEnter the details again"<<endl; */
        cout << "Enter the row size of matrix A: ";
        cin >> r1;
        cout << "Enter the coloumn size of matrix A: ";
        cin >> c1;

        cout << "Enter the row size of matrix B: ";
        cin >> r2;
        cout << "Enter the coloumn size of matrix B: ";
        cin >> c2;
    }

    cout <<endl<<"Enter the values of matrix A"<<"["<<r1<<"]"<<"["<<c1<<"]"<<": " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter element A" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout <<"Matrix A: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "enter the values of matrix B"<<"["<<r2<<"]"<<"["<<c2<<"]"<<": " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter element B" << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "Matrix B: " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

// matrix multiplication // 
    for (int i = 0; i < r1; i++)//iterates up to nummber of rows in matrix A//
    {
        for (int j = 0; j < c2; j++)//iterations up to number of columns in matrix B//
        {
            M[i][j] = 0;
            for (int k = 0; k < c1; k++)//iterates K up to number of columns of matrix A//K repeats addition for both the matrices//

                M[i][j] += A[i][k] * B[k][j];
        }
        cout << endl;
    }

    cout << "Multiplication of the matrix A and B is: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << M[i][j] << " ";
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