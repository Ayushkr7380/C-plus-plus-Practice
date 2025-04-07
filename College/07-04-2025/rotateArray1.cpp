#include<iostream>
using namespace std;
int main(){
    int arr[]={10,38,11,56,42};
    int n;
    cout<<"Enter the value of k : "<<endl;
    cin>>n;

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1 - i];
        arr[n - 1 -i] = temp;
    }

    for(int i=n;i<(n+size)/2;i++){
        int temp = arr[i];
        arr[i] = arr[(n+size)-1 - i];
        arr[(n+size) - 1 -i] = temp;
    }

    for(int i=0;i<size/2;i++){
        int temp = arr[i];
        arr[i] = arr[size-1 - i];
        arr[size - 1 -i] = temp;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}