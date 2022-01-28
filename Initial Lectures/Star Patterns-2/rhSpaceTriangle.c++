#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int c=1,r=1;
    while (r<=n)
    {
        c=1;
        while (c<=n-r+1)
        {
            cout<<"*";
            c++;
        }
        cout<<endl;
        r++;
    }
    return 0;
}