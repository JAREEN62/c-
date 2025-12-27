#include <iostream>
using namespace std;

/* int main()
{
   int A[] = {3, 6, 19, 34, 67, 2, 1, 9, 14, 19, 10, 34, 24, 41};
   int max = A[0];
   for (int i = 1; i < 14; i++)/* Initially max ahas the first value so westst from 2nd value 
   {
      if (A[i] > max)
      {
         max = A[i];
      }
      
   }
   cout<<max<<endl;
   return 0;
}
 */


int main()
{
   int A[] = {3, 6, 19, 34, 67, 2, 1, 9, 14, 19, 10, 34, 24, 41};
   int max = INT_MIN;
   int min = INT_MAX;
   for (auto x:A)/* Initially max ahas the first value so westst from 2nd value */
   {
      if (x > max)
      {
         max = x;
      } 
      else if (x < min)
      {
         min = x;
      }
   }
   cout<<max<<endl;
   cout<<min<<endl;
   return 0;
}




















/* int A[] = {14, 7, 10.6, 9, 4, 2, 7, 6};
int min = INT_MAX;
for (auto x : A)
   if (x < min)
      min = x;
cout << min << endl; */