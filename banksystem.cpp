#include <iostream>
using namespace std;
class BankAccount {
    int accountNo;
    string holderName;
    double balance;
public:
    BankAccount(int no, string name) {
        accountNo = no;
        holderName = name;
        balance = 0;
    }
    BankAccount(int no, string name, double balance) {
        accountNo = no;
        holderName = name;
        this->balance = balance;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void deposit(double amount, double bonus) {
        balance += amount + (amount * bonus / 100);
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
        else {
            cout << "Insufficient balance.\n";
        }
    }
    int getAccountNo() {
        return accountNo;
    }
    double getBalance() {
        return balance;
    }
    void display() {
        cout << "Account No: " << accountNo << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accounts[3] = {
        BankAccount(101, "Kavya"),
        BankAccount(102, "Riya", 5000),
        BankAccount(103, "Neha", 8000)
    };
    accounts[0].deposit(3000);
    accounts[1].deposit(2000, 10);
    accounts[2].withdraw(1000);
    cout << "\n--- All Accounts ---\n";
    for (int i = 0; i < 3; i++) {
        cout << endl;
        accounts[i].display();
    }
    int searchNo;
    cout << "\nEnter account number to search: ";
    cin >> searchNo;
    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (accounts[i].getAccountNo() == searchNo) {
            cout << "\nAccount Found:\n";
            accounts[i].display();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Account not found.\n";
    }
    int maxIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (accounts[i].getBalance() >
            accounts[maxIndex].getBalance()) {
            maxIndex = i;
        }
    }
    cout << "\n--- Highest Balance Account ---\n";
    accounts[maxIndex].display();
    return 0;
}