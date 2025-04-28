#include<iostream>
using namespace std;
class LoveLetter{
    public:
        void senderName(){
            cout<<"Ranbir ❤"<<endl;
        }
    private:
        void message(){
            cout<<"You can't see me."<<endl;
        }
    protected:
        void emojiUsed(){
            cout<<"Emoji: 😘(Alia Only)"<<endl;
        }
};
class Wife : public LoveLetter{
    public :
        void readLoveLetter(){
            senderName();
            emojiUsed();
        } 
};
int main(){
    Wife alia;
    alia.readLoveLetter();
    return 0;
}