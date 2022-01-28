#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch=65;      // ASCII of 'A'
    int r=1,c=1;
    while (r<=n){
        c=1;
        ch='A'+r-1;
        while (c<=r)
        {
            cout<<ch<<" ";
            c++;
            ch++;
        } 
        r++;
        cout<<endl;
    }
    return 0;
}