#include <iostream>
using namespace std;
class Acc {
private:
    int accno;
    double bal;
public:
    Acc(int accNum, double bal) {
        accno = accNum;
        bal = bal;
    }
    friend void compareBalance(const Acc& acc1, const Acc& acc2);
};
void compareBalance(const Acc& acc1, const Acc& acc2) {
    if (acc1.bal > acc2.bal) {
        cout << "Account " << acc1.accno << " has the higher balance." <<endl;
    } else if (acc2.bal > acc1.bal) {
        cout << "Account " << acc2.accno << " has the higher balance." <<endl;
    } else {
        cout << "Both Account " << acc1.accno << " and Account " << acc2.accno << " have equal balances." <<endl;
    }
}

int main() {
    Acc acc1(101, 45000.0);
    Acc acc2(102, 62000.0);
    compareBalance(acc1, acc2); 
    return 0;
}