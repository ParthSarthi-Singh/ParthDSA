#include<iostream>
using namespace std;


bool isEven(int n){
    if(n%2==0){
        return true;
    }
        return false;
    
}

int main(){

    int n;
    cout<<"Enter the Number: " ;
    cin>>n;

    isEven(n)?cout<<"Even number":cout<<"Odd Number";
    return 0;
}