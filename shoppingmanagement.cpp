#include <iostream>
using namespace std;
class Product {
    int pid;
    string pname;
    float price;
public:
    void input() {
        cout<<"Enter product id: ";
        cin>>pid;
        cout<<"Enter product name: ";
        cin>>pname;
        cout<<"Enter price: ";
        cin>>price;
    }
    float calPrice() {
        return price;
    }
    float calPrice(float discount) {
        return price-(price*discount/100);
    }
    float calPrice(float discount, float deli) {
        return price-(price*discount/100)+deli;
    }
    void display() {
        cout<<"Product Id: "<<pid<<endl;
        cout<<"Product name: "<<pname<<endl;
        cout<<"Original price: "<<price<<endl;
        cout<<"Price after discount: "<<calPrice(20)<<endl;
        cout<<"Price after discount with delivery: "<<calPrice(20, 50)<<endl;
    }
};
int main() {
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    Product *p= new Product[n];
    for (int i=0; i<n; i++) {
        cout<<"Enter details: "<<i+1<<endl;
        p[i].input();
    }
    cout<<"\nProduct details: "<<endl;
    for (int i=0; i<n; i++) {
        p[i].display();
    }
    delete[] p;
    return 0;
}