#include<iostream>
using namespace std;
class BankAccout{
    public:
        int accountNumber;
        string accountHolderName;
        float balance;

        //kisi v member ko initial value dene k liye constructor ka use krte hai.
        BankAccout(int accountNumber,string accountHolderName,float balance){
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;
            this->balance = balance;
        }

        void display(){
            cout<<"Account Number : "<<this->accountNumber<<endl;
            cout<<"accountHolderName : "<<this->accountHolderName<<endl;
            cout<<"Balance : "<<this->balance<<endl;
        }
};
int main(){
    BankAccout b1(1,"Ayush 1",122.4);
    b1.display();
    BankAccout b2(2,"Ayush 2",222.4);
    b2.display();
    BankAccout b3(3,"Ayush 3",322.4);
    b3.display();
    return 0;
}