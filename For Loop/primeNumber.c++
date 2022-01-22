#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool prime=1;
    for (int i=2;i<=n/2; i++){
        if (n%i==0){
            prime=0;
            break;
        }
    }
    (prime==1)?cout<<n<<" is a Prime Number":cout<<n<<" is not a prime Number";
    return 0;
}