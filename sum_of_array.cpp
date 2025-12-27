#include <iostream>
using namespace std;

int main()
{
   int sum = 0;
   int A[] = {4, 7, 9, 34, 8, 12, 14};
   for (auto x : A)
   {
      sum += x;
   }
   cout << sum << endl;

   /*  int A[] = {1,2,3,4,5,6,7,8};
          int sum =0;
Ø
            for(int i = 0;i < 7;i++)
                  sum = sum+A[i];
             cout<<sum<<endl; */
   return 0;
}
