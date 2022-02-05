#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int start = 0,end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(k==arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if (k>arr[mid]){
            start = mid+1;
            
        }
        else if(k<arr[mid]){
            end = mid-1;
            
        }
        mid = start + (end-start)/2;
        
    }
    return ans;

}


int lastOcc(int arr[], int n, int k)
{
    int start = 0,end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(k==arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if (k>arr[mid]){
            start = mid + 1;
            
        }
        else if(k<arr[mid]){
            end = mid - 1;
            
        }

        mid = start + (end-start)/2;
        
    }
    return ans;

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

    int firstIndex = firstOcc(arr, size, k);
    int lastIndex = lastOcc(arr, size, k);

    cout<<endl;

    cout << "First index of " << k << " is at : " << firstIndex << endl;
    cout << "Last index of " << k << " is at : " << lastIndex << endl;
 

    return 0;
}