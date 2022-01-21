#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r=n;
    while(r>0){
        int c=n;
        while (c>0)
        {
            cout<<"*";
            c--;
        }
        
        cout<<endl;
        r--;
    }
    return 0;
}