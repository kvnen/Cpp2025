#include <string>
#include <iostream>

namespace MathOperations{
int add(int x, int y){
	return x + y;
}
}

namespace TextOperations {
std::string concat(std::string a, std::string b){
	return a + b;
}
}

int main(void){
	std::cout << MathOperations::add(11,12) << std::endl;
	std::cout << TextOperations::concat("hello", "world") << std::endl;
}
