#include <iostream> 



int main(void){
	//defining variables.
	float x;
	float y;
	char op = ' ';
	float z;
	//prompting user to give input and storing it in variables.
	std::cout << "give number: ";
	std::cin >> x;
	std::cout << "give another: ";
	std::cin >> y;
	std::cout << "give operator: ";	
	std::cin >> op;

	// here is the switch case which handles the operator character and does the math
	switch (op) {
		case '+':
			z = x + y;
			break;
		
		case '-':
			z = x - y;
			break;

		case '*':
			z = x * y;
			break;
		//lets hope that the user doesnt divide by zero :)
		case '/':
			z = x / y;
			break;
		default:
			//if the user gives a non defined character it berates them and gives a frownign walrus.
			std::cout << "bad input :€" << std::endl;
			return 0;
			break;
	}
	// print out the answer. this could have been done in the switch without the z variable but this is more better. IMO
	std::cout << "the answer is: " << z << std::endl;
}
