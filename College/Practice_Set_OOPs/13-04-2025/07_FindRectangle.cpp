//Constructor overloading concept
#include<iostream>
using namespace std;

class Rectangle{
  public:
    float length;
    float breadth;
    
    Rectangle(){
        this->length = 12;
        this->breadth = 2;
    }

    Rectangle(float l,float b){
        this->length = l;
        this->breadth = b;
    }

    void display(){
        float area = this->length * this->breadth;

        cout<<"Area of rectangle is "<<area<<endl;
    }
};

int main(){

    Rectangle r1;
    r1.display();
    Rectangle r2(5,4);
    r2.display();
    return 0;
}