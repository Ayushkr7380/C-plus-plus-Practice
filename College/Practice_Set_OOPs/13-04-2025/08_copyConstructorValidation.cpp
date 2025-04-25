#include<iostream>
using namespace std;

class Product{
  public:
    int id;
    float price;
    
    // Constructor
    Product(int i, float p) {
        this->id = i;
        this->price = p;
    }

    // Copy Constructor
    Product(const Product &p) {
        id = p.id;
        price = p.price;
    }

    // Display function
    void display() {
        cout << "Product ID: " << id << ", Price: " << price << endl;
    }
};
int main(){
    //object using constructor
    Product p1(101, 49.9);
    cout << "Original Product : ";
    p1.display();

    //object using copy constructor
    Product p2 = p1;
    cout << "Copied Product : ";
    p2.display();

    return 0;
}