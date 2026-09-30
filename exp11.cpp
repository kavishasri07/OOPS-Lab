#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator obj;
    cout<<"Addition of integers: "<<obj.add(10, 20)<<endl;
    cout<<"Addition of float values: "<<obj.add(10.5f, 20.5f)<<endl;
    cout<<"Addition of three integers: "<<obj.add(10, 20, 30)<<endl;
    return 0;
}