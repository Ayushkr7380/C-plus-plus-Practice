#include<iostream>
using namespace std;
struct Students{
    int roll;
    float marks;
};

void inputAndDisplay(Students *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<"Enter roll number of student "<<i+1<<" : ";
        cin>>ptr[i].roll;

        cout<<"Enter  marks of student "<<i+1<<" : ";
        cin>>ptr[i].marks;

    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " -> Roll: " << ptr[i].roll << ", Marks: " << ptr[i].marks << endl;
    }
}
int main(){
    int n;
    cout<<"Enter number of students : ";
    cin>>n;
    Students s[n];
    Students *ptr = s;

    inputAndDisplay(ptr,n);
    return 0;
}