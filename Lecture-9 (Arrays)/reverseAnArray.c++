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


void reverseArray(int arr[], int n){
    
    int temp;
    for (int i = 0 ,j = n-1 ; i<j ; i++, j--){
        
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
  
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
 
    reverseArray(arr, n);

    cout << "After reversing the array - " << endl;

    printArray(arr, n);
    return 0;
}