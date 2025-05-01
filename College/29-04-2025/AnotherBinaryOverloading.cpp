#include<iostream>
using namespace std;
class LoveScore{
    int score;

    public:
        LoveScore(int s){
            this->score = s;
        }
        
        LoveScore operator+(const LoveScore &other){
            return (this->score + other.score);
        }
        void displayScore(){
            cout<<"Combined love score: "<<this->score<<". Made for each other like Raj and Simran!"<<endl;
        }

};
int main(){

    LoveScore srk(70);
    LoveScore kajol(75);
    LoveScore result = srk + kajol;
    result.displayScore();
    return 0;
}