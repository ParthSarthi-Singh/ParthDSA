#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r=1,c=1;
    while (r<=n)
    {
        c=1;
        while (c<=r)
        {
            cout<<"*";
            c++;
        }
        cout<<endl;
        r++;
        
    }
    return 0;
}