#include<iostream>
using namespace std;
class MovieBudget{
    float budget;
    public:
        MovieBudget(float b){
            this->budget = b;
        }

        // Overload > operator
        bool operator>(const MovieBudget &other) {
            return this->budget > other.budget;
        }
};
int main(){
    MovieBudget m1(150);
    MovieBudget m2(120);

    if (m1 > m2)
        cout << "Movie 1 wins with more paisa vasool!" << endl;
    else
        cout << "Movie 2 wins with more paisa vasool!" << endl;
    return 0;
}