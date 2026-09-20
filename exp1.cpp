#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    int grade;

void input() {
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Grade: ";
    cin>>grade;
}

void display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
}

void displayGrade() {
    if (grade>=75) cout<<"First Division"<<endl;
    else if (grade>=60) cout<<"Second Division"<<endl;
    else if (grade>=50) cout<<"Third Division"<<endl;
    else cout<<"Fail"<<endl;
}
};

int main() {
    Student s;   
    s.input();
    s.display();
    s.displayGrade();
    return 0;
}