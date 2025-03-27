#include <iostream>
//define the macro square
#define SQUARE(x) (x*x)

int main(void){
int x;
	// ask for the number
	std::cout << "give the number you want squared: ";
	//read the number
	std::cin >> x;
	//print the number
	std::cout << "\nsquare of " << x << " is: " << SQUARE(x) << std::endl;
return 0;
}
