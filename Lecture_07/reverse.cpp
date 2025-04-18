#include<iostream>
using namespace std;

int Reverse(int n){
    
    int ans = 0;
    int digit;
    while(n != 0)
    {
        digit = n % 10;
        ans = ( ans * 10 ) + digit;
        n = n/10; 
    }

    return ans;

}

int main()
{
    int num;
    cout<<"Enter the number to be reversed "<<endl;
    cin>>num;
    int reversedNum = Reverse(num);
    cout<<"The reverse of "<<num<<" is "<<reversedNum;

    return 0;

}