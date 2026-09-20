#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}

// Call by Reference
void callByReference(int &x) {
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}

// Call by Address (Pointer)
void callByAddress(int *x) {
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main() {
    int num = 20;

    cout << "Initial Value: " << num << endl;

    // Call by Value
    callByValue(num);
    cout << "After Call by Value: " << num << endl;

    // Call by Reference
    callByReference(num);
    cout << "After Call by Reference: " << num << endl;

    // Call by Address
    callByAddress(&num);
    cout << "After Call by Address: " << num << endl;

    return 0;
}