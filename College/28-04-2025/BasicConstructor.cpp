#include<iostream>
using namespace std;
class DilwaleMeetingPoint{
    private:
        int x;
        int y;
    public:
        DilwaleMeetingPoint(int x,int y){
            this->x = x;
            this->y = y;
        }

        void display(){
            cout<<"SRK met Kajol at ("<<this->x<<", "<<this->y<<")...Ishq wala love!"<<endl;
        }
};
int main(){
    DilwaleMeetingPoint d1(100,200);

    d1.display();

    return 0;
}