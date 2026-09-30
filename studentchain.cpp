#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    string studentName;
    Student* nextStudent;

    Student(int roll, string name) {
        rollNumber = roll;
        studentName = name;
        nextStudent = nullptr;
    }
};

int main() {
    Student s1(1, "Hello1");
    Student s2(2, "Hello2");
    Student s3(3, "Hello3");

    s1.nextStudent = &s2;
    s2.nextStudent = &s3;
    s3.nextStudent = nullptr;

    Student* current = &s1;

    while (current != nullptr) {
        cout << current->studentName << endl;
        current = current->nextStudent;
    }

    return 0;
}