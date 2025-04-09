#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:

        int roll;
        string name;
        float marks[5];
        float avg;
        char grade;
        static int student_count;
        
        void input(){
            cout<<"Enter name : ";
            getline(cin,name);
            
            cout<<"Enter roll number : ";
            cin>>roll;
            cout<<"Enter marks : ";
            for(int i=0;i<5;i++){
                cin>>marks[i]>>setprecision(2);
            }
            
            student_count++;
        }
        
        void calculate_avg(){
            float sum = 0.0;
            for(int i = 0;i<5;i++){
                sum+=marks[i];
            }
            
            int avg = sum / 5;
            cout<<"Average marks : "<<avg<<endl;
            if(avg > 200){
                cout<<"Grade A"<<endl;
            }
            else if(avg > 100 && avg < 200){
                cout<<"Grade B"<<endl;
            }
            else if(avg > 50 && avg > 100){
                cout<<"Grade C"<<endl;
            }
            else {
                cout<<"Grade Fail"<<endl;
            }
        }
        
        void display(){
            cout<<"Roll : "<<roll<<endl;
            cout<<"Name : "<<name<<endl;
            for(int i=0;i<5;i++){
                cout<<"marks in subject "<<i+1<<" : "<<marks[i]<<endl;
            }
            
        }

        static void display_count(){
            cout<<"Total number of student : "<<student_count<<endl;
        }
    
};
int Student::student_count = 0;

int main(){
    
    Student s;

    s.input();
    s.calculate_avg();
    s.display();
     
    return 0;
}
