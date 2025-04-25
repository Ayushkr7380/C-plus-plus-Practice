#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        float salary;

    void input(){
        cout<<"Enter id : ";
        cin>>this->id;

        cout<<"Enter salary : ";
        cin>>this->salary;
    }   

    
    void display(){
        cout<<"Id : "<<this->id<<", "<<"Salary : "<<this->salary<<endl;
    }
};
int main(){
    Employee e[5];

    for(int i=0;i<5;i++){
        e[i].input();
    }
    cout<<"\n..Data of Employees..\n";
    for(int i=0;i<5;i++){
        e[i].display();
    }

    return 0;
}