//Just like other datatypes in c and c++,arrays can also be passed to functions as parameters for different tasks.
//But there is a catch, Arrays ara always passed as pointers to the function.
//There are three different notations to pass arrays to functions 

//1. sized_array_notation --> void function_name(int array_name[size]) { }

//2. unsized_array_notation --> void function_name(int array_name[]) { }

//3. pointer_notation --> void function_name(int *array_name) { }

//When you pass an array to a function, it does not actually pass the whole array.

//Instead , it only passes a pointer to the first element of the array.This is array decay --- the array "decays" into  a pointer.

//Since only a pointer is passed, the function loses information about how big the array actually is.if you try to use sizeof(array) inside the function,it will return the size of pointer, not the size of the entire array.

//To make sure the function knows the size of the array,you should pass the size as an extra argument.Like this --> void function_name(int array_name[] , int size) { }

#include<iostream>
using namespace std;

//sized_array_notation
void sized_array_notation_function(int arr[5],int size){
    cout << "Sized array notation function "<<endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << " "<<endl;
}

//unsized_array_notation_function
void unsized_array_notation_function(int arr[],int size){
    cout << "unsized array notation function"<<endl;

    for(int i=0;i<size;i++){
        cout<< arr[i] <<" ";
    }
    cout << " "<<endl;
}

//Pointer notation function
void pointer_notation_function(int *arr,int size){
    cout << "Pointer notation function "<< endl;

    for(int i=0;i<size;i++){
        cout << *(arr + i)<< " ";
    }
    cout << " "<<endl;
}
int main(){
    int arr[] = {12,3,45,6,78,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    sized_array_notation_function(arr,size);
    unsized_array_notation_function(arr,size);
    pointer_notation_function(arr,size);


    return 0;
}