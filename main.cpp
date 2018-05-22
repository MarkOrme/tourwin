#include <iostream>
#include <string>

int main(){

	char inputstream;
	std::cout << "Welcome to TourWin. Enter commands. \n";
	do {
		std::cout << ":";
		std::cin >> inputstream;


		switch (inputstream)
		{
			case 'q':
				std::cout << "Good bye.\n";
				break;
			case 'i':
				std::cout << "insert what? \n";
				break;
		} 
	} while ('q' != inputstream);
}
