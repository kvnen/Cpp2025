#include <iostream>
#include <cstdint>
//defining the number 50 as BIGNUMBER
#define BIGNUMBER 50U
int main(void){
	// changed the int to an 8 bit int 
	for(uint8_t i = 2; i <= BIGNUMBER; i += 2){
		//have to subtract 0 from the int because it thinks its a char 
		std::cout << i-0 << " ";
	}
	//added endl so my terminal doesnt add % in the end.
	std::cout << std::endl;
	return 0;
}
