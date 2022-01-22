// Question 3

#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;

    if (a-- > 0 || ++b > 2){    
// 1st condition executes in if statement 2nd condition doesn't execute due to the OR operator
        cout<<"Stage1 - Inside If";
    }
    else{
        cout<<"Stage2 - Inside else";
    }
    cout<<a<<" "<<b<<endl;   // Stage 1 -Inside if a=0,b=2
    
}