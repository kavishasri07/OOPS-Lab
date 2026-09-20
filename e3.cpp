#include <iostream>
using namespace std;

// 1. Inline function
inline int square(int n) {
    return n * n;
}

// 2. Function with default arguments
int add(int a, int b = 10) {
    return a + b;
}

// 3. Function overloading
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {

    // Inline function
    cout << "Square of 5: " << square(5) << endl;

    // Default argument
    cout << "Addition of 20 and 10: " << add(20, 10) << endl;
    cout << "Addition using default argument: " << add(20) << endl;

    // Function overloading
    cout << "Multiplication of integers: " << multiply(4, 5) << endl;
    cout << "Multiplication of decimals: " << multiply(2.5, 4.0) << endl;

    return 0;
}