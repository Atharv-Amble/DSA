#include<iostream>
#include <cstring>
using namespace std;

//Paramterized Resursion
void sum(int n,int total){
    if(n < 1){
        cout<<"The Sum is : "<<total;
        return;
    }
    sum(n-1,total + n);
}

//Functional Recursion
int sum1(int n){
    if(n < 1){
        return 0;
    }
    return n + sum1(n-1);
}

//Factorial of Number
int fact(int n){
    if(n == 0) {
        return 1;
    }

    return n * fact(n-1);
}

void reverse(int arr[],int l,int r){
    if(l >= r){
        return;
    }
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}

bool checkPalindrome(char c[] , int l , int r){
    if(l >= r){
        return true;
    }
    if(c[l] != c[r] ){
        return false;
    }
    checkPalindrome(c,c[l+1],c[r-1]);
}

int main(){
//    int n;
//    cout<<"Enter the number till you want the sum : ";
//    cin>>n;
//    cout<<"By Paramterized Way "<<endl;
//    sum(n,0);
//    cout<<endl;

//    int m;
//    cout<<"Enter the number till you want the sum : ";
//    cin>>m;
//    cout<<"By Functional Way "<<endl;
//    cout<<"The Sum is : "<<sum1(m);

//   int n;
//   cout<<"Enter the number : ";
//   cin>>n;
//   cout<<"The factorial of "<<n<<" is "<<fact(n);

//  int arr[5] = {1 , 2 , 3 , 4 ,5};
//  reverse(arr,0,4);
//  for(auto it : arr){
//     cout<<it<<" ";
//  }

    char c[10] = "dad";
    cout<<checkPalindrome(c,0,strlen(c) - 1);

   
}