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


int sumArray(int arr[], int n){
    int sum=0;
    for (int  i = 0; i < n; i++){
        sum += arr[i];
    }
    
    return sum;
}

int main(){

    int n;
    cout<<"Enter the size of the Array : ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cout<<"Enter Element Number "<<i+1<<" : ";
        cin>>arr[i];
    } 

    printArray(arr, n);

    //Finding min and max
    int sum;

    sum = sumArray(arr, n);

    cout << "Sum of Elements in an Array is : " << sum;
    return 0;
}