#include<iostream>
using namespace std;
class Hero{
    public:
        string power;

        void show(){
            cout<<"Iron man can "<<power<<endl;
        }
};
class IronMan : public Hero{
    public:
        IronMan(string s){
            power = s;
        }
        
};
int main(){
    IronMan i1("fly");
    i1.show();

    return 0;
}