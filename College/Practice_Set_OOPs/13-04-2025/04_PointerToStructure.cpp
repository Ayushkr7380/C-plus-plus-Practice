#include<iostream>
using namespace std;

struct books{
    string title;
    float price;
};

void inputAndDisplay(books *ptr){
    cout<<"Enter book title : ";
    getline(cin,ptr->title);

    cout<<"Enter book price : ";
    cin>>ptr->price;

    cout << "\n--- Book Details ---" << endl;
    cout << "Title: " << ptr->title << endl;
    cout << "Price: " << ptr->price << endl;
}
int main(){
    books b;
    books *ptr = &b; //Assign the address of b to ptr

    inputAndDisplay(ptr); //pass the pointer to the function

    return 0;
}