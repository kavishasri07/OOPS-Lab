#include <iostream>
using namespace std;
class Employee {
protected:
    int employeeId;
    string name;
    double basicSalary;
public:
    Employee(int id, string n, double salary) {
        employeeId = id;
        name = n;
        basicSalary = salary;
    }
    virtual double calculateSalary() {
        return basicSalary;
    }
    virtual ~Employee() {
    }
};

class Doctor : public Employee {
    double consultationAllowance;
public:
    Doctor(int id, string n, double salary, double allowance)
        : Employee(id, n, salary) {
        consultationAllowance = allowance;
    }
    double calculateSalary() override {
        return basicSalary + consultationAllowance;
    }
};

class Nurse : public Employee {
    double nightShiftAllowance;
public:
    Nurse(int id, string n, double salary, double allowance)
        : Employee(id, n, salary) {
        nightShiftAllowance = allowance;
    }
    double calculateSalary() override {
        return basicSalary + nightShiftAllowance;
    }
};

int main() {
    Employee *e1 = new Doctor(101, "Dr. Rahul", 50000, 10000);
    Employee *e2 = new Nurse(102, "Neha", 30000, 5000);
    cout<<"Doctor Salary: "<<e1->calculateSalary()<<endl;
    cout<<"Nurse Salary: "<<e2->calculateSalary()<<endl;
    delete e1;
    delete e2;
    return 0;
}