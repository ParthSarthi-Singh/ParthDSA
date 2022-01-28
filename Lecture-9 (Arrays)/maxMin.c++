#include<iostream>
using namespace std;



void printArray(int arr[], int size){
    cout << endl << "Printing Array - \n\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";    
    } 
    cout<<endl;    
}

int main(){

    int n;
    cout<<"Enter the size of the Array : ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Element Number "<<i+1<<" : ";
        cin>>arr[i];
    } 

    printArray(arr, n);
    int min=arr[0],max=arr[0];
    for (size_t i = 0; i < n-1; i++){

        if (min>arr[i+1]){

            min=arr[i+1];
        }
        if(max<arr[i+1]){
            max=arr[i+1];
        }    
    }
    

    cout<<"Max is : "<<max<<endl;
    cout<<"Min is : "<<min<<endl;
    return 0;
}