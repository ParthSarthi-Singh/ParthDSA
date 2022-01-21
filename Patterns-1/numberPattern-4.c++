#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int r=1,c=1,i=1;
    while (r<=n)
    {
        c=1;
        while (c<=n)
        {
            cout<<i<<" ";
            i++;
            c++;
        }
        r++;
        cout<<endl;
        
    }
    
}