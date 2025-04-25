#include<iostream>
using namespace std;

int main(){
    int count = 10;
    int *const ptr = &count;

    cout<<"Value of count : "<<*ptr<<endl;

    *ptr = 20;

    cout<<"Value of count changed : "<<*ptr<<endl;

    int change = 45;
    // ptr = &change; //It won't work , as pointer is constant..

    // cout<<"Value of change : "<<*ptr<<endl;

    return 0;
}