#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r=1;
    while (r<=n){
        int c=0;
        while (c<3){
            cout<<r;
            c++;
        }
        r++;
        cout<<endl;
    }
    return 0;
}