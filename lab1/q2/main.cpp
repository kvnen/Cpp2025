#include <cctype>
#include <iostream>
#include <string>
// func. for turning a cpp string to uppercase
std::string toUppercase(std::string input){
	//iterates over all the characters of the string, turns each char. to uppercase and puts it back
	for(short int i = 0; i < input.size(); i++){
		input[i]=std::toupper(input[i]);
	}
	return input;
}
int countVowels(std::string input){
	//turn the whole input to uppercase so i can count lower and uppercase characters without specifying them separately
	input = toUppercase(input);
	short int output = 0;
	// iterate over all the characters of the string and comparing them to vowels
	for(short int i = 0; i < input.size(); i++){
		if (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U' || input[i] == 'Y') 
			output++;
	}
	return output;
}
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
	// testing all the functions separately and uppercase and reverse together with the input being "helloworld"
	std::string input = "helloworld";
	std::cout << toUppercase(input) << std::endl;
	std::cout << countVowels(input) << std::endl;
	std::cout << reverseString(input) << std::endl;
	std::cout << toUppercase(reverseString(input)) << std::endl;
}
