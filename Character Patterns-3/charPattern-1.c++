#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch=65;      // ASCII of 'A'
    int r=1,c=1;
    while (r<=n){
        c=1;
        while (c<=n)
        {
            cout<<ch<<" ";
            c++;
        } 
        r++;
        ch++;
        cout<<endl;
    }
    
    return 0;
}