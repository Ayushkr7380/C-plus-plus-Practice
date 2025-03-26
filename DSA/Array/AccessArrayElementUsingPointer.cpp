//Internally , arrays operators are performed using pointer arithmetic.
//So, we can do almost any array operation by using pointer to the first element.
//For Example,we can access all the elements of an array using pointer to the first element.

#include<iostream>
using namespace std;

int main(){
    int arr[] ={12,4,53,23,12};

    //Define a pointer to the first element.
    int *ptr = arr;

    for(int i=0;i<5;i++)
        cout << *(ptr + i) << " ";
    
    
    return 0;
}