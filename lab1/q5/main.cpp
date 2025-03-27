#include <iostream> 

int main(void){
	std::string input;
	int output = 0;
	//asking the numbers without any whitespace since that was the example input
	std::cout << "give numbers (without any whitespace): ";
	// getting the input 
	std::cin >> input; 
	//iterating through the characters and adding them to output 
	for(int i = 0; i < input.size(); i++){
		// here the input characters are added to output but have to remember to -0 since the characters are ascii
		output += input[i]-'0';	
	}
	//printing output
	std::cout << "the sum is: " << output << std::endl;
	return 0;
}
