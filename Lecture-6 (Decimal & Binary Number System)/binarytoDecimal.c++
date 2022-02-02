#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter binary number : ";
    cin>>n;
    int i=0,dec=0;
    while (n!=0){
        int digit = n%10;
        if (digit==1){
            
            dec=(pow(2,i))+dec;

        }
        i++;
        n/=10;
        
    }
    cout<<"Decimal Number is : "<<dec;
    return 0;

}