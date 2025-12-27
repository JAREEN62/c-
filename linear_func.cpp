#include <iostream>

int search(int n,int A[],int key)
{
    for(int i = 0;i<n;i++)
    {
        if(key == A[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    std::cout<<"\nEnter the size of the array: ";
    std::cin>>n;

    int A[n]; 
    std::cout<<"\nEnter the elements of the array: ";
    for(int i = 0; i<n; i++)
    {
       std::cin>> A[i];
    }

    std::cout<<"\nThe values of the array: ";
    for(int i=0; i<n; i++)
    {
        std::cout<<A[i]<<" ";
    }

    int key;
    std::cout<<"\n\nEnter the key: ";
    std::cin>>key;
    int index = search(n,A,key);
    if(index == -1)
    {
        std::cout<<"\nKey not found!\n";
    }
    else
    {
        std::cout<<"\nKey found at position: "<<index+1<<"\n";
    }
}