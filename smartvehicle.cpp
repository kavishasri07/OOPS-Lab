#include <iostream>
using namespace std;

class Vehicle {
protected:
    int vehicleNo;
    string brand;
    double distance;
public:
    Vehicle(int no, string b) {
        vehicleNo = no;
        brand = b;
        distance = 0;
    }
    Vehicle(int no, string b, double d) {
        vehicleNo = no;
        brand = b;
        distance = d;
    }
    virtual double calculateRent() {
        return 0;
    }
    class Registration {
        string registrationState;
        int registrationYear;

    public:
        Registration(string state, int year) {
            registrationState = state;
            registrationYear = year;
        }
        void display() {
            cout<<"Registration State: "<<registrationState<<endl;
            cout<<"Registration Year: "<<registrationYear<<endl;
        }
    };
    virtual ~Vehicle() {
    }
};

class Car : public Vehicle {
public:
    Car(int no, string b, double d)
        : Vehicle(no, b, d) {
    }
    double calculateRent() override {
        return distance * 15 + 500;
    }
    void display() {
        cout<<"Vehicle Type: Car"<<endl;
        cout<<"Vehicle No: "<<vehicleNo<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Distance: "<<distance<<" km"<<endl;
        cout<<"Rent: Rs. "<<calculateRent()<<endl;
    }
};
class Bike : public Vehicle {
public:
    Bike(int no, string b, double d)
        : Vehicle(no, b, d) {
    }
    double calculateRent() override {
        return distance * 8 + 100;
    }
    void display() {
        cout<<"Vehicle Type: Bike"<<endl;
        cout<<"Vehicle No: "<<vehicleNo<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Distance: "<<distance<<" km"<<endl;
        cout<<"Rent: Rs. "<<calculateRent()<<endl;
    }
};

int main() {
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;
    Vehicle **vehicles = new Vehicle*[n];
    for (int i = 0; i < n; i++) {
        int type;
        int no;
        string brand;
        double distance;
        cout << "Vehicle " << i + 1 << endl;
        cout << "Enter 1 for Car, 2 for Bike: ";
        cin >> type;
        cout << "Enter Vehicle No: ";
        cin >>no;
        cout << "Enter Brand: ";
        cin>>brand;
        cout<<"Enter Distance: ";
        cin>>distance;
        if (type == 1) {
            vehicles[i] = new Car(no, brand, distance);
        } else {
            vehicles[i] = new Bike(no, brand, distance);
        }
    }
    cout << "Vehicle Details";
    for (int i = 0; i < n; i++) {
        if (Car *c = dynamic_cast<Car*>(vehicles[i])) {
            c->display();
        } else {
            Bike *b = dynamic_cast<Bike*>(vehicles[i]);
            b->display();
        }
        cout << endl;
    }
    Vehicle::Registration r("UP", 2026);
    cout<<"Registration Information";
    r.display();
    for (int i = 0; i < n; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
    return 0;
}