#include <iostream>
using namespace std;
class Student {
private:
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
    Student s1(101, "ABC");
    Student s2(102, "RST");
    Student s3(103, "XYZ");
    cout << "Student Details:" << endl;
    displayStudent(s1);
    displayStudent(s2);
    displayStudent(s3);
    Student::showCount();
    return 0;
}