#include<iostream>
using namespace std;

int main()
{
    char i;
    cin>>i;
    if(i > 96 && i < 123){
        cout<<"It is a Lower Case Letter";
    }
    else if(i>64 && i<91){
        cout<<"It is a Capital Letter";
    }
    else{
        cout<<"It is a Numeric character"; 
    }
    
    return 0;
}