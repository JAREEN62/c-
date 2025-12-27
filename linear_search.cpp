#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter th size : ";
    cin >> n;
    int A[n];
    int key;
    cout << "Enter the values of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "The values of array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Enter the key: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "Found the key at " << i+1 << endl;
            return 0;
        }
    }
    cout << "Key not found!" << endl;
    return 0;
}

/* int main()
{
    int A[ 10],n=10,key;
    cout<<"Enter numbers: ";
    for(int i = 0;i<n;i++)
        cin>>A[i];
    cout<<"Number list: ";
    for(int i = 0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    cout<<"Enter the key: ";
    cin>>key;
    for(int i = 0;i<n;i++)
        if(key==A[i])
            cout<<"found at "<<i<<endl;
            return 0;
    cout<<"Not found"<<endl;
    return 0;
}
 */







