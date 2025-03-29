#include<iostream>
using namespace std;

void largestElement(int arr[],int size){
    int largest = arr[0];
    for(int i=0;i<size;i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    cout<< "Largest element is "<<largest<<endl;
}
int main(){
    int size = 5;
    int arr[size] = {12,4,243,4,3};

    largestElement(arr,size);

    return 0;
}