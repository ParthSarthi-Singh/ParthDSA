#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int start = 0,end = n-1;
    int mid = start + (end-start)/2;
    

    while(start<=end){
        if(k==arr[mid]){
            return mid;
        }
        else if (k>arr[mid]){
            start = mid+1;
            mid = start + (end-start)/2;;
        }
        else if(k<arr[mid]){
            end = mid-1;
            mid = start + (end-start)/2;;
        }
        
    }
    return -1;

}

int main(){
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;

    int arr[size]; 
    cout<<endl;
    cout << "Enter Elements in Array(should be sorted) - "<<endl;

    for (int i = 0; i < size; i++){
        cout << "\t Enter element at index " << i << " : ";
        cin >> arr[i];
    }
    
    cout<<endl;

    int k;
    cout<<"Enter Key to be found : ";
    cin>>k;

    int index = binarySearch(arr, size, k);

    cout<<endl;
    (index != -1) ? cout << "Value found at index " << index : cout<<"Value not found";

    return 0;
}