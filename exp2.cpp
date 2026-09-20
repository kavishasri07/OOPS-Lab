#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    int grade;

void input() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll No: ";
    cin >> rollno;
    cout << "Enter Grade: ";
    cin >> grade;}

void display(string name) {
    cout << "Name: " << name << endl;
}

void display(string name, int rollno) {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
}

void display(string name, int rollno, int grade) {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
    if (grade>=75) cout<<"First Division"<<endl;
    else if (grade>=60) cout<<"Second Division"<<endl;
    else if (grade>=50) cout<<"Third Division"<<endl;
    else cout<<"Fail"<<endl;
}
};

int main() {
    Student s;
    s.input();
    cout << "Display 1:"<<endl;;
    s.display(s.name);
    cout << "Display 2:"<<endl;
    s.display(s.name, s.rollno);
    cout << "Display 3:"<<endl;
    s.display(s.name, s.rollno, s.grade);
    return 0;
}