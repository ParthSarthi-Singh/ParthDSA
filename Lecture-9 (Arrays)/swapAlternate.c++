#include<iostream>
using namespace std;




void printArray(int arr[], int size){
    cout << endl << "Printing Array - \n\t";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";    
    } 
    cout <<endl <<endl;    
}


void alternateSwap(int arr[], int n){
    
    int temp;
    for (int i = 0 ; i<n-1 ; i+=2){
        
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
}

int main(){

    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    
    int arr[n];

    for (int i = 0; i < n; i++){
        cout<<"Enter Element Number "<<i+1<<" : ";
        cin>>arr[i];
    } 


    cout << "Before reversing the array - " << endl;

    printArray(arr, n);
 
    alternateSwap(arr, n);

    cout << "After alternate swapping the array - " << endl;

    printArray(arr, n);
    return 0;
}