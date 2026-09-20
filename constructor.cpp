#include <iostream>
using namespace std;
class student {
    string name;
    int marks;
public:
    student(string n, int m) {
        name= n;
        marks= m;
    }
    student() {
        cout<<"Default Contructor";
    }
    student(const student &s) {
        name= s.name;
        marks= s.marks;
    }
    void show() {
        cout<<name;
        cout<<marks;
    }
};
int main() {
    student s1("Hello", 85);
    student s2= s1;
    s1.show();
    s2.show();
    return 0;
}