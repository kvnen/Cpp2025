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
};

class ElectricCar : public Car {
	private: 
		int batteryCapacity;
		
};
