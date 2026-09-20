#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
public:
    Student() {
        rollNo = 0;
        name = "Unknown";
    }
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
    }
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Default constructor:" << endl;
    Student s1;
    s1.display();
    cout << "Constructor with parameters:" << endl;
    Student s2(101, "Hello");
    s2.display();
    cout << "Copy constructor:" << endl;
    Student s3 = s2;
    s3.display();
    return 0;
}
