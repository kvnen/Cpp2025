#include <iostream>

//making a swapped struct so i can return 2 integers from the following function
struct swapped{
	int x;
	int y;
};
//this is just dumb...
swapped swapwithout(int x, int y){
	swapped output;
	output.x = y;
	output.y = x;
	return output;
}

//swapping with references is pretty easy and straight forward
void swapref(int& x, int& y){
	int z = x;
	x = y;
	y = z;
}

//swapping with pointers is little bit worse than references cause of derefernecing
void swappoint(int* x, int* y){
	int z = *x;
	*x = *y;
	*y = z;
}

int main(void){
	int x;
	int y;
	std::cout << "give num x: ";
	std::cin >> x;
	std::cout << "give num y: ";
	std::cin >> y;
	
	std::cout << "swap without anything: " << swapwithout(x,y).x << " " << swapwithout(x,y).y << std::endl;

	//this is the best. no need to do anything funny
	swapref(x,y);
	std::cout << "swap with ref: " << x << " " << y << std::endl;
	//here need to pass in references instead of just integers but it's fine.
	swappoint(&x,&y);
	std::cout << "swap with pointer : " << x << " " << y << std::endl;
	return 0;
}
