#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the amount : ";
    cin>>n;

    int hundreds,fifties,twenties,ones;

    switch (1)
    {
    case 1:
        
            hundreds=n/100;
            cout<<"Hundreds : "<<hundreds<<endl;
            n%=100;
              
    case 2:
        
            fifties=n/50;
            cout<<"Fifties : "<<fifties<<endl;
            n%=50;
        
    case 3:
        
            twenties=n/20;
            cout<<"Twienties : "<<twenties<<endl;
            n%=20;
        
    case 4:
        
            ones=n/1;
            cout<<"Ones : "<<ones<<endl;
            n=n%1;
    
    }
}
