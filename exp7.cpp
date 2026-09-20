#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    static int count;

public:
    Student(int r, string n) {
        rollNo = r;
        name = n;
        count++;
    }
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
    friend void displayStudent(const Student &s);
};
int Student::count = 0;
void displayStudent(const Student &s) {
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
}

int main() {
    Student s1(101, "Hello");
    Student s2(102, "World");
    Student s3(103, "Unknown");
    cout << "Student 1:" << endl;
    displayStudent(s1);
    cout << "Student 2:" << endl;
    displayStudent(s2);
    cout << "Student 3:" << endl;
    displayStudent(s3);
    cout << "Shared Static Data:" << endl;
    Student::showCount();
    return 0;
}