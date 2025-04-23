#include<bits/stdc++.h>
using namespace std;
class Demo{
    private: //withIn class , and class member.
        int a;
    protected: //access by memebers,inside class,inside child class (single).
        int p;
    public: //public keyboard can be access anywhere , inside class, outside class, main function e.t.c
        int c;
        // friend void display(); //friend keyword is an entity which is not member of class but can access private and protected.

        friend class Display;
    Demo(int a,int p,int c){
        this->a = a;
        this->p = p;
        this->c = c;
    }
};
// void display(){
//         Demo dd(10,20,30);
//         cout<<"a = "<<dd.a<<endl;
//         cout<<"p = "<<dd.p<<endl;
//         cout<<"c = "<<dd.c<<endl;
//     }

class Display{
    public:
        void print(){

            Demo dd(10,20,30);
            cout<<"a = "<<dd.a<<endl;
            cout<<"p = "<<dd.p<<endl;
            cout<<"c = "<<dd.c<<endl;
        }
};
int main(){
    // Demo d1(10,20,30);
    Display d1;
    d1.print();

    return 0;
}