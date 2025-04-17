#include <iostream>

class Vehicle{
	protected:
		std::string brand;
		int year;
	public:
		Vehicle(std::string b, int y) : brand(b), year(y){}

		virtual void showInfo(){
			std::cout << "brand: " << brand << ", year: " << year << std::endl;
		}

		virtual void startEngine(){
			std::cout << "Starting engine of Vehicle" << std::endl;
		}

};

class Car : public Vehicle {

	private:
		int numDoors;
	
	public:
		Car(std::string b, int y, int n) : numDoors(n), Vehicle(b,y){}

		void showInfo() override {
			std::cout << "brand: " << brand << ", year: " << year << ", number of doors: " << numDoors << std::endl;
		}

		void startEngine() override {
			std::cout << "Car engine is starting!" << std::endl;
		}

		int getnumDoors(){
			return numDoors;
		}
};

class ElectricCar : public Car {
	private: 
		int batteryCapacity;
	public: 
		ElectricCar(std::string b, int y, int n) : Car(b,y,n), batteryCapacity(0){}
		ElectricCar(std::string b, int y, int n, int c) : Car(b,y,n), batteryCapacity(c){}

		void showInfo() override {
			std::cout << "brand: " << brand << ", year: " << year << ", number of doors: " << getnumDoors() << ", battery capacity: " << batteryCapacity << std::endl;
		}

		void startEngine(int i) override {
			std::cout << "Electric engine is starting... silent but powerful" << std::endl;
		}
};

int main(){
	Vehicle* v1 = new Vehicle("wroom", 2000);
	v1->startEngine();
	v1->showInfo();

	Car* c1 = new Car("Toyota", 1987, 2);
	c1->showInfo();
	c1->startEngine();

	ElectricCar* e1 = new ElectricCar("Skoda", 2024, 4);
	ElectricCar* e2 = new ElectricCar("Skoda", 2024, 4, 1000);
	
	e1->showInfo();
	e1->startEngine();

	e2->showInfo();
	e2->startEngine();

	delete v1;
	delete c1;
	delete e1;
	delete e2;
}
