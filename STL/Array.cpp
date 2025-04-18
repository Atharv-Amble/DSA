#include<iostream>
#include<array>
using namespace std;

int main(){

    array <int,4> a = {1,2,3,4};
    array <int,4> b = {5,6,7,8};


    //Front Element
    cout<<"The first element is "<<a.front()<<endl;

    //Last Element
    cout<<"The last element is "<<a.back()<<endl;

    //Size of array
    cout<<"Size of an Array is "<<a.size()<<endl;

    //at function
    cout<<"The element at index 2 of array a is "<<a.at(2)<<endl;

    //Swap betweeen two arrays
    cout<<"Arrays before swapping "<<endl;

    cout<<"Array a : ";
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Array b : ";
    for(int i=0 ; i<b.size() ; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<"Arrays after swapping "<<endl;

    a.swap(b);

    cout<<"Array a : ";
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Array b : ";
    for(int i=0 ; i<b.size() ; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    //fill()
    a.fill(10);
    cout<<"Fill Operation "<<endl;
    cout<<"Array a : ";
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}