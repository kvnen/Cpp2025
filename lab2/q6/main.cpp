//this was by far the best task so far
//
//should add empty lines between cout to make it easier to read but... 

#include <iostream>
//defining student
struct student{
	char name[50];
	int id;
	float grade;
};

//function to add a student and return it's address
student* addstudent(){
	student* newstudent = new student;
	std::cout << "Enter student name: ";
	std::cin >> newstudent->name;
	std::cout << "Enter student id: ";
	std::cin >> newstudent->id;
	std::cout << "Enter student grade: ";
	std::cin >> newstudent->grade;
	return newstudent;
}

//function to print student info with nice indentation for better reading :)
void printstudent(student x){
	std::cout << "Name: " << x.name << "\n\tId: " << x.id << "\n\tGrade: " << x.grade << std::endl;
}

int main(void){
	student** students = new student*[1000]; //array of pointers to students
	char action; 				//character for selected action in switch case
	int studentnum = 0;			//number of students that is incremented as they are added
	bool running = true;			//running for the while loop so that it can exit without returning main

	while(running){

		std::cout << "what do you want to do?\n(1)add student\n(2)list all students\n(3)search by id\n(4)exit" << std::endl;
		std::cin >> action;

		switch (action){
			case '1': 	//this calls addstudent and increments the studentnum thus adding a student
				students[studentnum] = addstudent();
				studentnum++;
				break;

			case '2': 	//this prints all students
				for(int i = 0;i < studentnum; i++){
					printstudent(*students[i]);
				}
				break;

			case '3':{ 	//this checks all students for the id provided if none match it acts accordingly
					//probably should be its own function but too late now D:
					 int id = 0;
					 bool studentfound = false;
					 std::cout << "give id to search: ";
					 std::cin >> id;
					 for(int i = 0; i < studentnum; i++){
						 if(id == students[i]->id){
							 printstudent(*students[i]);
							 studentfound = true;
							 break;
						 }
					 }
					 if(studentfound == false){
						 std::cout << "no students found with id: " << id << std::endl;
					 }
					 break;
				 }
			case '4':	//this prints an exit message before quitting while loop
				 std::cout << "bye bye" << std::endl;
				 running = false;
				 break;
			default: 	//handle any funny business 
				 std::cout << action << " is not a valid action" << std::endl;
		}
	}
	delete[] students; 	//remember to free the memory after
}
