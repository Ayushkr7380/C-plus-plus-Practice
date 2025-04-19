#include<iostream>
using namespace std;

void printValue(void *ptr, int type) {
    switch (type) {
        case 1:
            cout << "Value of a is " << *(int *)ptr << endl;
            break;

        case 2:
            cout << "Value of b is " << *(float *)ptr << endl;
            break;

        case 3:
            cout << "Value of c is " << *(char *)ptr << endl;
            break;

        default:
            cout << "Type should be 1, 2, or 3." << endl;
    }
}

int main() {
    int a = 10;
    float b = 10.4;
    char c = 'A';

    int type;

    cout << "Enter type (1=int, 2=float, 3=char): ";
    cin >> type;

    void *ptr;

    if (type == 1) ptr = &a;
    else if (type == 2) ptr = &b;
    else if (type == 3) ptr = &c;

    printValue(ptr, type);

    return 0;
}
