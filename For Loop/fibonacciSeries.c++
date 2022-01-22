#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int n;
    cout<<"Enter Number of terms : ";
    cin>>n;
    if (n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<" "<<b;
    }
    else if (n>2){
        cout<<a<<" "<<b<<" ";
        for (int i = 3; i <= n; i++){
            int temp=a+b;
            cout<<temp<<" ";
            a=b;
            b=temp;   
        }
    }
    return 0;
    }