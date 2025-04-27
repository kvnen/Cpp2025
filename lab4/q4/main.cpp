#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string model;
    int year;
    float price;

public:
    Car() : model(""), year(0), price(0.0f) {}
    virtual ~Car() {}

    void inputBasic() {
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
    }

    void displayBasic() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: " << price << endl;
    }

    virtual void input() = 0;
    virtual void display() const = 0;
};

class ElectricCar : public Car {
private:
    float batterySize;

public:
    ElectricCar() : batterySize(0.0f) {}

    void input() override {
        inputBasic();
        cout << "Enter battery size (kWh): ";
        cin >> batterySize;
    }

    void display() const override {
        displayBasic();
        cout << "Battery size: " << batterySize << " kWh" << endl;
    }
};

class GasCar : public Car {
private:
    float fuelCapacity;

public:
    GasCar() : fuelCapacity(0.0f) {}

    void input() override {
        inputBasic();
        cout << "Enter fuel capacity (liters): ";
        cin >> fuelCapacity;
    }

    void display() const override {
        displayBasic();
        cout << "Fuel capacity: " << fuelCapacity << " liters" << endl;
    }
};

class HybridCar : public Car {
private:
    float batterySize;
    float fuelCapacity;

public:
    HybridCar() : batterySize(0.0f), fuelCapacity(0.0f) {}

    void input() override {
        inputBasic();
        cout << "Enter battery size (kWh): ";
        cin >> batterySize;
        cout << "Enter fuel capacity (liters): ";
        cin >> fuelCapacity;
    }

    void display() const override {
        displayBasic();
        cout << "Battery size: " << batterySize << " kWh, Fuel capacity: " << fuelCapacity << " liters" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of cars: ";
    cin >> n;

    Car** fleet = new Car*[n];
    int* types = new int[n]; 

    for (int i = 0; i < n; ++i) {
        cout << "Enter the type of car " << (i + 1) << " (1 = Electric, 2 = Gas, 3 = Hybrid): ";
        cin >> types[i];

        if (types[i] == 1) {
            fleet[i] = new ElectricCar();
        } else if (types[i] == 2) {
            fleet[i] = new GasCar();
        } else if (types[i] == 3) {
            fleet[i] = new HybridCar();
        }

        fleet[i]->input();  
    }

    for (int i = 0; i < n; ++i) {
        cout << "\nCar " << (i + 1) << " details:\n";
        fleet[i]->display(); 
    }

    for (int i = 0; i < n; ++i) {
        delete fleet[i];  
    }

    delete[] fleet;  
    delete[] types; 

    return 0;
}

