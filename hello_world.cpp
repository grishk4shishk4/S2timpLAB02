#include <iostream>
#include <string>

int main(){
	std::string name;
	// создание переменной для хранения имени
	std::cout << "Enter your name: "; std::cin >> name;
	// ввод значения переменной
	std::cout << "hello world from @" << name << endl;
	// вывод текста на экран
	return 0;
}
