#include<iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[],int size){
    int FirstLargest = INT_MIN;
    int SecondLargest = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i] > FirstLargest){
            SecondLargest = FirstLargest;
            FirstLargest = arr[i];
        }
        else if(arr[i] > SecondLargest && arr[i] != FirstLargest){
            SecondLargest = arr[i];
        }
    }
    return SecondLargest;
}
int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};

    cout<<"Second Largest Element of an array is : "<<secondLargest(arr,size)<<endl;

    return 0;
}