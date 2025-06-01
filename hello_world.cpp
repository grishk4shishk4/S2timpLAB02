#include <iostream>
#include <string>

int main(){
	// Declare a variable to store user's name
	std::string name;
	// Promt the user for his name and read it
	std::cout << "Enter your name: "; std::cin >> name;
	// Pring a greeting message
	std::cout << "hello world from @" << name << endl;
	return 0;
}
