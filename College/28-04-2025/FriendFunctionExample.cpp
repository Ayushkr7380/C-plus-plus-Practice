#include<iostream>
using namespace std;
class LoveLetter{
    private:
        string sender;
    public : 
        LoveLetter(string s){
            this->sender = s;
        }
    friend void revealSecretLover(LoveLetter &I);      
};

void revealSecretLover(LoveLetter &I){
    cout<<"Pyaar express : From "<<I.sender<<" -> To Deepika ❤ (revealed by Ranveer!)"<<endl;
}
int main(){
    LoveLetter I("Ayush");
    revealSecretLover(I);
    return 0;
}