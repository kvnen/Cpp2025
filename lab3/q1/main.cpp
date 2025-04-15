#include <string>
#include <iostream>


class Book {
	private:
		std::string title;
		int pages;
		std::string author = "Peter";
	protected:
		float price;
	public:
		std::string publisher;
		void displayAuthorInfo(){
			std::cout << author << std::endl;
		}
		

};
int main(void){
	Book book1;
	//book1.title = "test";
	//std::cout << book1.title << std::endl;
	book1.publisher = "test";
	std::cout << book1.publisher << std::endl;
}
