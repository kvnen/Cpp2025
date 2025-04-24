#include <iostream>
#include <ostream>
using namespace std;
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
CompNum operator/(CompNum x, CompNum y){
	int denom = y.real*y.real+y.img*y.img;
	CompNum output(0,0);
	output.real = (x.real*y.real+x.img*y.img)/denom;
	output.img = (x.img*y.real-x.real*y.img)/denom;
	return output;
}
std::ostream& operator<<(std::ostream& os, CompNum x){
	if(x.img>=0){
	os << x.real << " + " << x.img << "i";
	}
	else if(x.img<0){
	os << x.real << " - " << abs(x.img) << "i";
	}
	return os;
}


int main(){
CompNum c1(4, 5), c2(2, -3);
cout << "c1 = " << c1 << endl;
cout << "c2 = " << c2 << endl;
cout << "Sum = " << c1 + c2 << endl;
cout << "Difference = " << c1 - c2 << endl;
cout << "Quotient = " << c1 / c2 << endl;
return 0;
}
