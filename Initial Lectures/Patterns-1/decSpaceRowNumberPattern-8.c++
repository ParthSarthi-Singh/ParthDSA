#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=1,r=1;
    while (r<=n)
    {
        c=1;
        int spc=r-1;
        while (c<=spc)
        {
            cout<<" ";
            c++;
        }
        while (c<=n)
        {
            cout<<r;
            c++;
            r++;
        }
        r=spc+2;  
        cout<<endl;  
    }
    return 0;
}