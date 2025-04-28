#include<iostream>
using namespace std;
class SabjiCart{
    private:
        string sabjiName;
        int quantity;
        int discount;
    public:
        SabjiCart(string s,int q){
            this->sabjiName = s;
            this->quantity = q;
            this->discount = 0;
        }
        SabjiCart(string s,int q,int d){
            this->sabjiName = s;
            this->quantity = q;
            this->discount = d;
        }
        void printBill(){
            if(this->discount){
                cout<<"Akshay bought "<<this->quantity<<" kg "<<this->sabjiName<<" and got "<<this->discount<<" % discount."<<endl;
            }
            else{
                cout<<"Akshay bought "<<this->quantity<<" kg "<<this->sabjiName<<".No discount yaar."<<endl;

            }
        }
};
int main(){
    SabjiCart s1("Bhindi",3);
    SabjiCart s2("Kaddu",4,30);

    s1.printBill();
    s2.printBill();
    return 0;
}