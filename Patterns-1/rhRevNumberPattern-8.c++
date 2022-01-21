#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int r=1,c=1;
    while (r<=n)
    {
        c=r;
        while(c>0){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
        r++;
    }
    
   
    return 0;
}