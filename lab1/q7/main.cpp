#include <iostream>
#include <string>

#define MIN_LENGTH 8

//here are functions to test each symbol requirement  
int isUppercase(char input){
	//this is the characters that are to be tested against
	std::string testcharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	// here we try to find the input character from testcharacters
	size_t found = testcharacters.find(input);
	//if the character is found return a 1 else return a 0
	if (found != std::string::npos){return 1;}
	else return 0;
}
// the 3 functions below are just copied so should be self explanitory
int isLowercase(char input){
	std::string testcharacters = "abcdefghijklmnopqrstuvwxyz";
	size_t found = testcharacters.find(input);
	if (found != std::string::npos){return 1;}
	else return 0;
}

int isDigit(char input){
	std::string testcharacters = "1234567890";
	size_t found = testcharacters.find(input);
	if (found != std::string::npos){return 1;}
	else return 0;
}

int isSymbol(char input){
	std::string testcharacters = "!@#$%^&*";
	size_t found = testcharacters.find(input);
	if (found != std::string::npos){return 1;}
	else return 0;
}
int checkReq(std::string input){
	//declaring some nice variables 
	bool uppercase = false;
	bool lowercase = false;
	bool digit = false;
	bool symbol = false;
	for (int i = 0; i < input.size(); i++){
		//check all requirements for each character and set their respective bools to true if it meets requirements
		if (isUppercase(input[i])){uppercase = true;}

		if (isLowercase(input[i])){lowercase = true;}

		if (isDigit(input[i])){digit = true;}

		if (isSymbol(input[i])){symbol = true;}
		// if all 4 requirements are met return a 1
		if (uppercase && lowercase && digit && symbol){return 1;}
	}
	return 0;
}

int main(void){

	// create the password variable called PW and ask the user for input
	std::string PW;
	std::cout << "Give a password: ";
	std::cin >> PW; 

	//check if password meets length and symbol requirements and act accordingly
	if (PW.size() < MIN_LENGTH || !checkReq(PW)){
		std::cout << "Weak Password" << std::endl;
		return 0;
	}
	else {
		std::cout << "Strong Password" << std::endl;
		return 0;
	}



}
