#include<iostream>
using namespace std;

class Hero {
public:
    string power;
};

class IronMan : public Hero {
public:
    void setPower(string s) {
        power = s;
    }
};

class TonyStark : public IronMan {
public:
    void show() {
        cout << "Tony Stark (Iron Man) can " << power << endl;
    }
};

int main() {
    TonyStark t;
    t.setPower("fly");
    t.show();
    return 0;
}
