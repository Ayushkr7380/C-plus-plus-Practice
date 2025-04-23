#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
        int l;
        int b;
        Rectangle(float l,float b){
            cout<<"Area "<<l*b<<endl;
        }
        Rectangle(int l,int b){
            cout<<"Perimeter : "<<2*(l+b)<<endl;
        }
        
};

int main(){
    Rectangle r1(2,4);
    Rectangle r2(2.5f,4.5f);

    return 0;
}