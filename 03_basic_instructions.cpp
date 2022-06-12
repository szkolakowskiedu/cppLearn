#include <iostream>

int main(){
	if (true) {
		std::cout << "if instruction\n";
	}

	if (false) {
		std::cout << "if instruction\n";
	}
	else {
		std::cout << "else instruction\n";
	}

	int a = 2;
	switch(a){
		case (1): std::cout << "switch a = 1\n"; break;
		case (2): std::cout << "switch a = 2\n"; break;
		case (3): std::cout << "switch a = 3\n"; break;
	}
	switch(a){
		default: std::cout << "switch default\n"; break;
		case (4): std::cout << "switch a = 1\n"; break;
		case (5): std::cout << "switch a = 2\n"; break;
		case (6): std::cout << "switch a = 3\n"; break;
	}

	while (a>0){
		std::cout << "a=" << a << " ";
		a--;
	}
	std::cout << "\n";

	do{
		std::cout << "a=" << a << "\n";
	} while (a>0);

	return 0;
}