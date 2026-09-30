#include <iostream>
#include <string>
using namespace std;

class ServiceRecord {
public:
    string serviceName;
    float serviceCost;

    void read() {
        cout<<"Enter Service Name: ";
        cin>>serviceName;
        cout<<"Enter Service Cost: ";
        cin>>serviceCost;
    }
    void display() {
        cout<<"Service: "<<serviceName<<", Cost: "<<serviceCost<<endl;
    }
};

class Vehicle {
private:
    string vehicleNumber;
    string ownerName;
    int serviceCount;
    ServiceRecord *services;

public:
    Vehicle(string number, string owner, int count) {
        vehicleNumber = number;
        ownerName = owner;
        serviceCount = count;
        services = new ServiceRecord[serviceCount];
    }
    void readServices(){
        for (int i = 0; i < serviceCount; i++) {
            cout<<"Enter Service"<<i + 1<<endl;
            services[i].read();
        }
    }
    void display() {
        cout<<"Vehicle Details";
        cout<<"Vehicle Number: "<<vehicleNumber<<endl;
        cout<<"Owner Name: "<<ownerName<<endl;
        cout<<"Service Records";
        float totalBill = 0;
        for (int i = 0; i < serviceCount; i++) {
            services[i].display();
            totalBill += services[i].serviceCost;
        }
        cout<<"Total Service Bill: "<<totalBill<<endl;
    }
    ~Vehicle() {
        delete[] services;
    }
};

int main() {
    string vehicleNumber;
    string ownerName;
    int serviceCount;
    cout<<"Enter Vehicle Number: ";
    cin>>vehicleNumber;
    cout<<"Enter Owner Name: ";
    cin>>ownerName;
    cout<<"Enter Number of Services: ";
    cin>>serviceCount;
    Vehicle *vehicle = new Vehicle(
        vehicleNumber,
        ownerName,
        serviceCount
    );
    vehicle->readServices();
    vehicle->display();
    delete vehicle;
    return 0;
}