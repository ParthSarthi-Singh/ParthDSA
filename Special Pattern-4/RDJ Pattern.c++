#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r=1,c=1;
    while (r<=n)
    {
        c=1;
        int stars=(r-1)*2;
        while (c<=n-r+1){
            cout<<c;
            c++;
        }

        while (stars){
            cout<<"*";
            stars--;
        }

        c--;

        while (c!=0){
            cout<<c;
            c--;
        }

        r++;
        cout<<endl;   
    }
    return 0;
}