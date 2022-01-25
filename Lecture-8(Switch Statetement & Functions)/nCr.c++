#include<iostream>
using namespace std;


int factorial(int a){  

    if (a==0)
        return 1;
    
    return a*factorial(a-1);
    
}


int nCr(int n, int r){
    int fact_n=factorial(n);

    int fact_r=factorial(r);

    int fact_n_r=factorial(n-r);

    int result = ((fact_n)/((fact_r)*(fact_n_r)));

    return result;
}


int main(){
    int n,r;
    cout<<"Enter n, r :";
    cin>>n>>r;

    cout<<"Answer is : " << nCr(n,r);
}
