#include <iostream>
using namespace std;

// Base class
class Appliance {
protected:
    int applianceID;
    string brand;
    float price;

public:
    void inputBase() {
        cout << "Enter Appliance ID: ";
        cin >> applianceID;
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayBase() {
        cout << "Appliance ID: " << applianceID << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

// Derived class
class SmartAppliance : public Appliance {
private:
    string connectivityType;
    int warrantyYears;

public:
    void input() {
        inputBase();
        cout << "Enter Connectivity Type (WiFi/Bluetooth/etc): ";
        cin >> connectivityType;
        cout << "Enter Warranty (years): ";
        cin >> warrantyYears;
    }

    void display() {
        displayBase();
        cout << "Connectivity: " << connectivityType << endl;
        cout << "Warranty Years: " << warrantyYears << endl;
        cout << "-----------------------------\n";
    }

    int getWarranty() {
        return warrantyYears;
    }
};

// Main Function
int main() {
    int n = 3;
    SmartAppliance appliances[n];

    cout << "=== Input Smart Appliances ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Appliance " << i + 1 << ":\n";
        appliances[i].input();
    }

    cout << "\n=== Display All Appliances ===\n";
    for (int i = 0; i < n; i++) {
        appliances[i].display();
    }

    cout << "\n=== Appliances with Warranty > 2 Years ===\n";
    for (int i = 0; i < n; i++) {
        if (appliances[i].getWarranty() > 2) {
            appliances[i].display();
        }
    }

    return 0;
}
