#include <iostream>
#include <string>
#include <algorithm>	/* to support transform in linux enviro */ 
#include "business.h"
	
int main(){

    Business objBus;
    
	std::string Input;
	std::cout << "Welcome to TourWin. Enter a command. \n";

	while (true) {
		std::cout << ":";
		std::cin >> Input;
		std::transform(Input.begin(),Input.end(),Input.begin(),::tolower);

		if (Input == "new") {
            objBus.New();
		}
		else if (Input == "edit"){
            objBus.Edit();
		}
        else if (Input == "help"){
            objBus.Help();
        }
        else if (Input == "report"){
            objBus.Report();
        }
		else if (Input == "quit"){
            objBus.Quit();
            return 0;
		}
		else {
			std::cout << "Unknown command. Type 'help' for list of valid commands.\n";
			std::cin.clear();
		}
	} // end of while loop
}
