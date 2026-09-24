#include <iostream>
using namespace std;
class Student {
    int rollNo;
    string name;
    float cgpa;
public:
    Student(int r, string n) {
        rollNo= r;
        name= n;
        cgpa= 0.0;
    }
    Student(int r, string n, float c) {
        rollNo= r;
        name= n;
        cgpa= c;
    }
    class Address {
        string city, state;
    public:
        Address(string c, string s) {
            city= c;
            state= s;
        }
        void displayAddress() {
            cout<<"City: "<<city<<endl;
            cout<<"State: "<<state<<endl;
        }
    };
    void updateCGPA(float cgpa) {
        this->cgpa= cgpa;
    }
    void display() {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
int main() {
    Student s[5]= {
        Student(101, "Hello1"),
        Student(102, "Hello2", 8),
        Student(103, "Hello3"),
        Student(104, "Hello4", 9),
        Student(105, "Hello5")
    };
    s[0].updateCGPA(7);
    s[2].updateCGPA(7.5);
    s[4].updateCGPA(8.5);
    for (int i = 0; i < 5; i++) {
        cout<<"Student "<<i+1<<endl;
        s[i].display();
    }
    cout<<"Address: \n";
    Student::Address a("Ghaziabad", "Uttar Pradesh");
    a.displayAddress();
    return 0;
}