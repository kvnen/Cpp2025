#include <iostream>

//copied this from question 2 since i already wrote it i dont see the point of doing it again
std::string reverseString(std::string input){
	// make the output string and resize it to input size
	std::string output;
	output.resize(input.size());
	// iterate over the characters and put them in reverse order in output
	for(short int i = 0; i < input.size(); i++){
		output[input.size()-i-1]=input[i];
	}
	return output;
}

int main(void){
	std::string input;

	std::cout << "give numbers to reverse: ";
	// i dunno if the point was to only allow numbers but this works too i guess 
	std::cin >> input;
	std::cout << "here they are in reverse order: " << reverseString(input) << std::endl;

}
