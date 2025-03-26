#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,3,4,12,4};

    //Size of 1st element an array
    cout <<"Size of 1st element of an array : "<<sizeof(arr[0]) << endl;

    //Size of an array
    cout <<"Size of an array : "<<sizeof(arr) << endl;

    //Length of an array
    cout <<"Length of an array : "<<sizeof(arr) / sizeof(arr[0]) <<endl;

    return 0;
}