//In C++,arrays and pointers are closely related to each other.
//The array name can be treated as a constant pointer that stored the memory address of the first element of the array.

#include<iostream>
using namespace std;

int main(){
    int arr[5];

    //Printing array name.
    cout <<"Name of the array is : "<<arr << endl;   

    //Printing the address of the first element of an array.
    cout << "Address of first element of an array : "<<&arr[0]<<endl;
    
    //Printing the address of second element of an array.
    cout << "Address of second element of an array : "<<&arr[1];
    return 0;
}