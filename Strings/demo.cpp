#include<iostream>
using namespace std;

int getLen(char name[]){
   int count = 0;
   for(int i=0 ; name[i]!='\0' ; i++){
        count ++;
   } 

   return count;
}

void reverseString(char name[],int n){
    int start = 0;
    int end = n - 1;
    while(start < end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    cout<<"The reversed string is : "<< name << endl;
}

void maxOccuring(string s){
    int arr[26] ={0};
    for(int i=0 ; i<s.length() ; i++){
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }

        arr[number]++;
    }

    int maxi = -1;
    int result = 0;
    for(int i=0 ; i<26 ; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            result = i;
        }
    }

    cout<<"The maximum occuring character is " << char(result + 'a')  <<endl;
}

int main(){
        char name[30];
        cout<<"Enter your name : "<<endl;
        cin>>name;

        cout<<"Length : " << getLen(name) << endl;
        reverseString(name,getLen(name));
        
        string s = "output";
        maxOccuring(s);

}