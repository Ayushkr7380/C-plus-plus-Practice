#include<iostream>
using namespace std;
class MoodMeter{
    int moodLevel;

    public:
        MoodMeter(int moodLevel){
            this->moodLevel = moodLevel;
        }

        void operator++(int){
            moodLevel++;
        }
        void displayMood(){
            cout<<"Varun's mood level: "<<this->moodLevel<<". All set for a dance-off!"<<endl;
        }
};
int main(){
    MoodMeter m(5);

    m++; // Uses the postfix overload

    m.displayMood();

    return 0;
}