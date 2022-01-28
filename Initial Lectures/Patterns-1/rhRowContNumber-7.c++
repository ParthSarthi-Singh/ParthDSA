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
            cout<<r+c-1<<" ";   
            c++;
        }
        r++;
        cout<<endl;
        
    }
    return 0;
}