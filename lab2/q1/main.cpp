#include <iostream>
#include <cmath>
//mult for integers
int mult(int x, int y){
	return x*y;
}
//mult for floats
float mult(float x,float y){
	return x*y;
}
//mult for float and int that is floored when bool f is true
float mult(float x, int y, bool f){
	if (f==0){
		return x*y;
	}else {
		return std::floor(x*y);
	}
}
//getting input from user and testing all functions
int main(){
	int ix;
	int iy;
	float fx;
	float fy;
	std::cout << "give an integer: ";
	std::cin >> ix;
	std::cout << "give another: ";
	std::cin >> iy;
	std::cout << "give a float: ";
	std::cin >> fx;
	std::cout << "give another: ";
	std::cin >> fy;
	std::cout << "ix * iy: " << mult(ix,iy) << ", fx * fy: " << mult(fx,fy) << std::endl;
	std::cout << "fx * ix: " << mult(fx,ix,0) << ", fx * ix floored: " << mult(fx,ix,1) << std::endl;
}
