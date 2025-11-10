#include <iostream>
using namespace std;

class vehicle 
{
protected:
    string brand;
    string model;
};

class car : protected vehicle
{
protected:
    string type;
};

class electric : protected car 
{
    int battery_capacity;
public:
    void accept() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter type: ";
        cin >> type;
        cout << "Enter battery capacity: ";
        cin >> battery_capacity;
    }

    void display() {
        cout << "\nBrand = " << brand;
        cout << "\nModel = " << model;
        cout << "\nType = " << type;
        cout << "\nBattery capacity = " << battery_capacity << endl;
    }
};

int main() {
    electric e1;
    e1.accept();
    e1.display();
    return 0;
}

