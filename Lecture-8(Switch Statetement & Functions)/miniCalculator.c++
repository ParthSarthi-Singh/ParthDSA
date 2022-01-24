#include<iostream>
using namespace std;

int main(){

    int a,b;
    char o;
    
    cout<<"Enter Number one : ";
    cin>>a;
    cout<<"Enter Number two : ";
    cin>>b;
    cout<<"Enter Operation Symbol (+,-,*,/,%) : ";
    cin>>o;

    switch(o){
        case '+' : cout << "Addition of Numbers : "<<a+b;
        break;
        case '-' : cout << "Subtraction of Numbers : "<<a-b;
        break;
        case '*' : cout << "Multiplication of Numbers : "<<a*b;
        break;
        case '/' : cout << "Dividation of Numbers : "<<a/b;
        break;
        case '%' : cout << "Modulo is : "<<a%b;
        break;
        default: cout << "Enter Valid Operation";
    }

}