#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int r=1,c=1;
     while (r<=n)
     {
         c=1;
         int spc=n-r;
         while (c<=spc){
            cout<<" ";
            c++;
         }
         while (c<=n){
            cout<<"*";
            c++;
         }
         cout<<endl;
         r++;    
     }
     
 }