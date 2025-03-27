#include <iostream> 

int main(int argc, char **argv){
	int output = 0;
	for (int i; i < sizeof(*argv[1]); i++){

	output += argv[1][i];

	}
	std::cout << output << std::endl;
	return 0;
}
