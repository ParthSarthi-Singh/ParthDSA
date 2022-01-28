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


int linearSearch(int arr[], int n, int element){
    
    for (int  i = 0; i < n; i++){
        if (arr[i]==element){
            return i;
        }
        
    }
    
    return -1;
}

int main(){

    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;

    int element;
    cout<<"Enter the Element to be found : ";
    cin >> element;
    
    int arr[n];

    for (int i = 0; i < n; i++){
        cout<<"Enter Element Number "<<i+1<<" : ";
        cin>>arr[i];
    } 

    printArray(arr, n);

    
    int index;

    index = linearSearch(arr, n, element);

    (index==-1) ? cout << " Element not found in the Array " :  cout << " Element " << element << " found at index "<<index;

    return 0;
}