#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};

    //Before updating the 3rd element of array.
    cout << "Before updation : " <<arr[2] <<endl;

    //Updating the 3rd element of array.
    arr[2] = 45;

    //After updating the 3rd element of array.
    cout<< "After updation : " <<arr[2];
    
    return 0;
}