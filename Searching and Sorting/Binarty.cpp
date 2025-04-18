#include<iostream>
using namespace std;

int main(){
    int arr[20];
    int key;
    int n;
    cout<<"Enter the number of elements in an array "<<endl;
    cin>>n;
    cout<<"Enter the array elements "<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"The given array is "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the key to be searched "<<endl;
    cin>>key;

    int start = 0;
    int end = n-1;
    int mid;
    while(start <= end){

        mid = (start + end) / 2;
        if(key == arr[mid]){
            cout<<"The element "<<key<<" found at index "<<mid<<endl;
            return 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

    }

    cout<<"Element Nor Present in an array "<<endl;
    return -1;

}