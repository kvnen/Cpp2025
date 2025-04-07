#include <iostream>

int main(void){
	int number;
	//scary infinite loop
	while(true){
		std::cout << "give a number: ";
		std::cin >> number;
		// if number is less than 0 exit the program 
		if (number < 0){
			return 0;
		}
		// if number 0 then start over
		else if (number == 0) {
			continue;
		}
		// if all is well then print the square of number
		else {
			std::cout << number*number << std::endl;
		}
	}
}
