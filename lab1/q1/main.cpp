#include <string>
#include <iostream>

// namespace for math operations
namespace MathOperations{
	//function that returns the sum of 2 numbers
	int add(int x, int y){
		return x + y;
	}
}

//namespace for text operations
namespace TextOperations {
	//functions that concatenates 2 strings
	std::string concat(std::string a, std::string b){
		return a + b;
	}
}

int main(void){
	//testing the functions
	std::cout << MathOperations::add(11,12) << std::endl;
	std::cout << TextOperations::concat("hello", "world") << std::endl;
}
