#include<iostream>
using namespace std;
int main(){
    int arr[] = {38,11,56,42,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp[size] = {0};
    int d;
    cout<<"Enter the value of d : ";
    cin >> d;

    for(int i=0;i<size;i++){
        for(int j=d;j<size;j++){
            temp[i] = arr[j];
            i++;
        }
        for(int k=0;k<d;k++){
            temp[i] = arr[k];
            i++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<temp[i]<<" "; 
    }

    return 0;
}