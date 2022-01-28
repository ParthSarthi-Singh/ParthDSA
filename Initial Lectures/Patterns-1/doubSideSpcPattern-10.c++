#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=1,r=1;
    while (r<=n)
    {
        int spc=n-r;
        c=1;
        while (c<=spc){
            cout<<" ";
            c++;
        }
        while (c<=n){
            cout<<c-spc;
            c++;
        }
        while (c<n+r){
            cout<<n+r-c;
            c++;
        }
        r++;
        cout<<endl;
    }
    return 0;
}