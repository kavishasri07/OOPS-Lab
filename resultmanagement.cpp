#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    float marks;

    void read() {
        cout<<"Enter Roll Number: ";
        cin>>rollNumber;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Marks: ";
        cin>>marks;
    }
    void display() {
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student *students = new Student[n];
    for (int i= 0; i<n; i++) {
        cout<<"\nEnter details of Student "<<i+1<<endl;
        students[i].read();
    }
    cout<<"Student Records";
    for (int i= 0; i<n; i++) {
        students[i].display();
        cout<<endl;
    }
    Student *highest= &students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks>highest->marks) highest = &students[i];
    }
    highest->display();
    delete[] students;
    return 0;
}