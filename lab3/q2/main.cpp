#include <iostream>

class Student{

	private:
		std::string name;
		int age;
		char grade;
		std::string group = "2025 group";

	public:
		//setters
		void setName(std::string n){
			name = n;
		}
		void setAge(int a){
			age = a;
		}
		void setGrade(char g){
			grade = g;
		}
		//getters	
		std::string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		char getGrade(){
			return grade;
		}

		void displayInfo(){
			std::cout << "name: " << getName() << " age: " << getAge() << " grade: " << getGrade() << std::endl;
		}
};

int main(){
	Student s1;	//creating a student

	s1.setName("Antti");	//setting attributes
	s1.setAge(1);
	s1.setGrade('F');

	std::cout << s1.getName() << std::endl;
	std::cout << s1.getAge() << std::endl;
	std::cout << s1.getGrade() << std::endl;

	s1.displayInfo();
}
