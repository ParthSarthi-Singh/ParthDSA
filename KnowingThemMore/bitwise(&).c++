#include<iostream>
using namespace std;
int main(){
    
    for (int i = 0; i <=15; i+=2)
    {
        cout<<"value of i : "<<i  << endl;
        if (i&1)
        {
            cout<<"Condition True for : "<< i << " and the Value is: "<< (i&1) << endl ;
            continue;
        }
        cout<< "Condition is false for i = "<<i<<endl;
        
        i++;
    }
   
}