#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int maxi = INT_MIN;
    int maxi2 = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi2 && arr[i] < maxi){
            maxi2 = arr[i];
        }
    }

    if(maxi2 == INT_MIN){
        return -1;
    }

    return maxi2;
}

//Optimal Approach
#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int seccond_largest = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > largest){
            seccond_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > seccond_largest && arr[i] != largest){
            seccond_largest = arr[i];
        }
    }

    if(seccond_largest != INT_MIN) return seccond_largest;
    else return -1;
}