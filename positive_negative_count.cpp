#include <iostream>
using namespace std;
int main()
{
   int n ;
   cout<<"Enter the size of array: ";
   cin >> n;
   int A[n],pcount=0,ncount=0;
   cout<<"Enter the values of array: ";
   for(int i = 0; i < n; i++)
   {
       cin>>A[i];
   }
   for(int x:A)
   {
       if(x>0)
       {
           pcount++;
       }
       else if (x<0)
       {
           ncount++;
       }
   }
   cout<<pcount<<" "<<ncount;
   return 0;
}
