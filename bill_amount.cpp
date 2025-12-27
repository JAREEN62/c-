#include<iostream>
using namespace std;
int main()
{
   float billAmt, disAmt = 0.0;
   cout<<"Enter Bill Amount: ";
   cin>>billAmt;
//    cout<<"Discount: ";
//    cin>>disAmt;
   if(billAmt>=500)      
        disAmt = billAmt*20/100;
        // cout<<"Discount: "<<disAmt<<endl;
        // cout<<"Total: "<<billAmt-disAmt<<endl;     
   else if(billAmt>=100 && billAmt<500)
        disAmt = billAmt*10/100;
        // cout<<"Discount: "<<disAmt<<endl;
        //cout<<"Total: "<<billAmt-disAmt<<endl;
cout<<"Bill Amount: "<<billAmt<<endl;
cout<<"DIscount Applied: "<<disAmt<<endl;
cout<<"Final Amount after discount: "<<billAmt-disAmt<<endl;
return 0;
}