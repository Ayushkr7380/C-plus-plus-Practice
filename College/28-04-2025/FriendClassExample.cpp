#include<iostream>
using namespace std;
class Gym{
    private:

        int chestSize;
    public: 
        Gym(int s){
            this->chestSize = s;
        }

        friend class Trainer;

};
class Trainer{
    public:
        void checkTestSize(Gym &g){
            cout<<"Bhai ki chaati:"<<g.chestSize<<" inches -- time to level up,bhai!"<<endl;
        }
};
int main(){

    Gym g(52);
    Trainer t;

    t.checkTestSize(g);
    return 0;
}