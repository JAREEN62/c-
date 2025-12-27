#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter th size : ";
    cin >> n;
    int A[n];
    int key;
    int l = 0;
    int h = n - 1;
    int mid;
    cout << "Enter the values of array in sorted order: ";
    for (int i = 0; i <n ; i++)
    {
        cin >> A[i];
    }

    cout << "The values of array: ";
    for (int i = 0; i <n ; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Enter the key: ";
    cin >> key;
    while (l <= h)
    {
        mid = l + h / 2;
        if (key == A[mid])
        {
            cout << "Found at " << mid+1<<endl;
            return 0;
        }
        else if (key <= A[mid])
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<"not Found "<<endl;
    return 0;
} 












/* int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int A[n];
    int l=0;
    int h = n-1;
    int key;
    int mid;
    cout<<"Enter the numbers in sorted order: ";
    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Given numbers list : ";
    for(int i = 0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the Key : ";
    cin>>key;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == A[mid])
        {
            cout<<"Found at "<<mid<<endl;
            return 0;
        }
        else if(key <= A[mid])
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<"Not Found!"<<endl;
    return 0;
} */