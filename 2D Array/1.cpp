#include<iostream>
using namespace std;

void rowSum(int arr[][4],int row,int col){

    for(int row=0 ; row<3 ; row++){
        int sum = 0;
        for(int col=0 ; col<4 ; col++){
            sum = sum + arr[row][col];
        }
        cout<<"Sum for "<<row<< " th row : "<<sum <<endl;
    }
}

void colSum(int arr[][4],int row,int col){

    for(int col=0 ; col<4 ; col++){
        int sum = 0;
        for(int row=0 ; row<3 ; row++){
            sum = sum + arr[row][col];
        }
        cout<<"Sum for "<<col<< " th col : "<<sum <<endl;
    }
}

void largestRowSum(int arr[][4],int row,int col){
    int maxSum = -1;
    for(int row=0 ; row<3 ; row++){
        int sum = 0;
        for(int col=0 ; col<4 ; col++){
            sum = sum + arr[row][col];
        }
        if(sum > maxSum){
            maxSum = sum;
        }
        
    }

    cout<<"The max sum from the rows is "<<maxSum;
}

void printSineWave(int arr[][3],int rows,int cols){
     for(int col = 0 ; col < cols ; col++){
        if((col % 2)==0){
            for(int row = 0 ; row < rows ; row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row = rows - 1 ; row > 0 ; row--){
                cout<<arr[row][col]<<" ";
            }
        }
     }
}

int main(){
    
    int arr[3][4];

    cout<<"Enter the elements of an array "<<endl;

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The required array is "<<endl;


    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    rowSum(arr,3,4);
    colSum(arr,3,4);
    largestRowSum(arr,3,4);

    int arr1[3][3];
    cout<<"Enter the elements of an array "<<endl;

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"The required array is "<<endl;


    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    printSineWave(arr1,3,3);
    

}