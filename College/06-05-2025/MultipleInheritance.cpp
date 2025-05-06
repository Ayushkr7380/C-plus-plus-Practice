#include<iostream>
using namespace std;

class Genius {
public:
    void brain() {
        cout << "Uses high IQ" << endl;
    }
};

class Billionaire {
public:
    void money() {
        cout << "Has lots of money" << endl;
    }
};

class IronMan : public Genius, public Billionaire {
public:
    void show() {
        cout << "Iron Man is a genius billionaire" << endl;
    }
};

int main() {
    IronMan i;
    i.show();
    i.brain();
    i.money();
    return 0;
}
