#include <iostream>
#include <ostream>

class CompNum{
	public:
		float real;
		float img;

		CompNum(float r, float i) : real(r), img(i){}


};

CompNum operator+(CompNum x, CompNum y){
	return CompNum(x.real+y.real, x.img+y.img);
}
CompNum operator-(CompNum x, CompNum y){
	return CompNum(x.real-y.real, x.img-y.img);
}
std::ostream& operator<<(std::ostream& os, CompNum x){
	os << x.real << " + " << x.img << "i";
	return os;
}


int main(){
	CompNum x = CompNum(3.4,3);
	CompNum y = CompNum(5.1,5.2);
	CompNum z = x + y;

	std::cout << z << std::endl;
}
