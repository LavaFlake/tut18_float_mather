#include <iostream>

double getDouble() {
	std::cout << "Give me a float: ";

	double a;
	std::cin >> a;

	return a;
}

char getSign() {
	std::cout << "Give me a math operator (+, -, *, /): ";
	
	double a;
	std::cin >> a;

	return a;
}

void displayAnswer(double answer) {
	std::cout << "Look at this awesome answer: " << answer << std::endl;
}

void displayError() {
	std::cout << "You really fucked this one up." << std::endl;
}
