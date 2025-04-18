#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

//Min and Max element
int MaxElement(int arr[],int size){

    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;

}

int MinElement(int arr[],int size){

    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min= arr[i];
        }
    }

    return min;
}

//Sum of array elements
int Total(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }

    return sum;
}

//Reverse an array
void Reverse(int arr[],int size){

    cout<<"The given array is : ";
    PrintArray(arr,size);
    cout<<endl;

    int start = 0;
    int end = size - 1;
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start ++;
        end --;
    }

    cout<<"Reversed array is : ";
    PrintArray(arr,size);
    cout<<endl;
}

//Alternate Reverse an Arrray
void Alternate_Reverse(int arr[],int size){

    cout<<"The given array is : ";
    PrintArray(arr,size);
    cout<<endl;

    int first = 0;
    int second = first + 1;
    int temp;
    while(second < size){
        temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;

        first = first + 2;
        second = second +2;
    }

    cout<<"Alternated Reversed array is : ";
    PrintArray(arr,size);
    cout<<endl;

}

void AlternateReverse_2(int arr[],int size){

    cout<<"The given array is : ";
    PrintArray(arr,size);
    cout<<endl;

    int temp;
    int i = 0;

    while(i+1 < size){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        i = i+2;
    }

    cout<<"The array after alternate reverse is : ";
    PrintArray(arr,size);
    cout<<endl;
}

//Duplicates BY Brute Force Method
//Optimal Solution By XOR
void findDuplicates(){
    
    int arr[5] = {1,2,2,3,4};
    int ans = 0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
            }
        }
    }

}

//Optimal Solution
    
{
    int ans = 0;
    for(int i=0 ; i<arr.size() ;i++){
        ans = ans ^ arr[i];
    }

    for(int i=1 ;i<arr.size() ; i++){
        ans = ans ^ i;
    }

    return ans;
	
}


int main(){
    int size;
    cout<<"Enter the array size "<<endl;
    cin>>size;

    int num[100];

    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    // cout<<"The maximum array element is "<<MaxElement(num,size);
    // cout<<endl;
    // cout<<"The manimum array element is "<<MinElement(num,size);

    // ----------------------------------------------------------------------------------------

    // cout<<"The sum of array elements is "<<Total(num,size)<<endl;

    // ----------------------------------------------------------------------------------------

    // Reverse(num,size);

    // -------------------------------------------------------------------------------------------

    // Alternate_Reverse(num,size);

    // -------------------------------------------------------------------------------------------

    // AlternateReverse_2(num,size);

    // -------------------------------------------------------------------------------------------


}