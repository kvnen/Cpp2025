#include <iostream>

class Car{

	private:
		std::string brand;
		int year;

	public:
		Car(std::string b, int y) : brand(b), year(y){
			std::cout << "Car " << brand << " from " << year << " created" << std::endl;
		}

		~Car(){
			std::cout << "Car " << brand << " destroyed" << std::endl;
		}

		void showInfo(){
			std::cout << "brand: " << brand << " year: " << year << std::endl;
		}
};

int main(){
	Car* c1 = new Car("Toyota",1987);
	c1->showInfo();
	delete c1;
}
