#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r=1;


    while (r<=n){
        int c=1;
        while (c<=n){
            cout<<c;
            c++;
        }
        r++;
        cout<<endl;
    }
    cout<<"\tPrinting the sequence the reverse"<<endl;
 // Printing the sequence in reverse
    r=1;
     while (r<=n){
        int c=n;
        while (c>0){
            cout<<c;
            c--;
        }
        r++;
        cout<<endl;
    }
    return 0;
}