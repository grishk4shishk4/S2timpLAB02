#include <iostream>
#include <string>

int 
main()
{
  std::string name;
  // Declare a variable to store user's name
  std::cout << "Enter your name: ";
  std::cin >> name;
  // Promt the user for his name and read it
  std::cout << "hello world from @" << name << endl;
  // Pring a greeting message
  return 0;
}
