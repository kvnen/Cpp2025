#include <iostream>

int main(void){
	//this is the original array to be reversed
	int ogarr[5] = {1,4,7,10,15};
	//this is the output array
	int revarr[5];
	//declare pointers for both arrays
	int* ogarrptr = ogarr;
	int* revarrptr = revarr;
	//setting the pointer to the end of the array so i can go backwards
	ogarrptr += std::size(ogarr) - 1;
	//for loop that iterates through both of the arrays
	for (int i = 0; i < std::size(ogarr); i++){
		//put values to the other array in reverse order one at a time
		*revarrptr = *ogarrptr;
		//decrement the original array pointer and increment the reverse array pointer after moving the variable
		ogarrptr--;
		revarrptr++;
	}
	//print the reversed array
	for(int i = 0; i < std::size(revarr); i++){
		std::cout << revarr[i] << std::endl;
	}
}
