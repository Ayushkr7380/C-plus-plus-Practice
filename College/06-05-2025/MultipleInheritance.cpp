#include<iostream>
using namespace std;

// Base class 1
class Genius {
public:
    // Method to simulate high intelligence
    void brain() {
        cout << "Uses high IQ" << endl;
    }
};

// Base class 2
class Billionaire {
public:
    // Method to simulate having wealth
    void money() {
        cout << "Has lots of money" << endl;
    }
};

// Derived class inheriting from both Genius and Billionaire
class IronMan : public Genius, public Billionaire {
public:
    // Method specific to IronMan
    void show() {
        cout << "Iron Man is a genius billionaire" << endl;
    }
};

int main() {
    IronMan i;       // Create object of derived class IronMan

    i.show();        // Call method specific to IronMan
    i.brain();       // Call inherited method from Genius
    i.money();       // Call inherited method from Billionaire

    return 0;
}
