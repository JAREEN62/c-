 #include<iostream>
 using namespace std;

 int main()
 {
    int A[]={1,4,3,6,45,7,89,9};
    for(auto &x:A)
    {
        cout<<++x<<",";
    }
    /* int n,e;
    int A[n];
    cout<<"Size: ";
    cin>>A[n];
    cout<<"Enter thr elements: ";
    cin>>;
    for(int i=0;i<A[n];i++)
    {
    cout<<A[i]<<",";
    }
    cout<<endl; */
    return 0;
 }