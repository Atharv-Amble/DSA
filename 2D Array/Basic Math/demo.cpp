#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2 ; i < num ; i ++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;

    bool var = isPrime(num);
    if(var){
        cout<<"The number "<<num<<" is prime "<<endl;
    }
    else{
        cout<<"The number "<<num<<" is not prime "<<endl;
    }

}