#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a Decimal Number : ";
    cin>>n;
    int rem[32],i=0;
    while (n!=0){
        rem[i]=(n&1);
        n=(n>>1);
        i++;
    }
    for ( i -=1; i >=0 ; i--){
        cout<<rem[i];
    }
    return 0;
}