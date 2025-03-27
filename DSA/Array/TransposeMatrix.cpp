#include<iostream>
using namespace std;

void transposeArray(int arr[2][2] , int size){
    int transArr[2][2];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            transArr[j][i] = arr[i][j];
        }
    }

    //Display the transposed array
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout << transArr[i][j] << " ";
        }
        cout <<""<<endl;
    }
}
int main(){
    int arr[2][2];  
    int size = 2;

    cout<<"Enter the value for elements of array : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin >> arr[i][j];
        }
    }
    //Before Transpose
    cout<<"Before Transpose : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<""<<endl;
    }

    //After Transpose
    cout<<"After Transpose : "<<endl;
    transposeArray(arr,size);
}