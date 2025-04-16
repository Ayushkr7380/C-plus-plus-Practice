#include<iostream>
using namespace std;
class Demo{
    public:
        int data;
        Demo(int data){
            this->data = data;
            cout<<"Constructor calling"<<endl;
        }

        ~Demo(){
            cout<<"Destructor calling"<<endl;
        }
};

int main(){
    Demo d1(25);
    cout<<"data : "<<d1.data<<endl;

    d1.~Demo();

    // delete d1;

    cout<<"After destructor : "<<d1.data<<endl; //It will still give value 25 because int data is primitive type not class type ,that's why c++ is not pure oops 

    return 0;
}