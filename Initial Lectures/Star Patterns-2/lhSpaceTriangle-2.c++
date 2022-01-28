#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=1,r=1;
    while (r<=n)
    {
        int spc = r-1;
        c=1;
        while (c<=spc)
        {
            cout<<" ";
            c++;
        }
        while (c<=n)
        {
            cout<<"*";
            c++;
        }
        r++;
        cout<<endl;
        
        
    }
    return 0;
}