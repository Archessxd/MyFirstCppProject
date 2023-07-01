#include <iostream>
#include "Operations.h"

int main() {
	std::cout << "hello world" <<std::endl;
	int procNo = NULL;
	int firstNumber = NULL;
	int secondNumber = NULL;
	Operations op;
	
	std::cout << "----------------------" << std::endl;
	std::cout << "1- (+)" << std::endl;
	std::cout << "2- (-)" << std::endl;
	std::cout << "3- (*)" << std::endl;
	std::cout << "4- (/)" << std::endl;
	std::cout << "type the number of your process :";
	std::cin >> procNo;
	std::cout<< "type the 1st number :";
	std::cin >> firstNumber;
	std::cout << std::endl << "type the  2nd number :";
	std::cin >> secondNumber;
	std::cout << std::endl;




	std::cout << "result :";
	switch (procNo) {
	case 1:
		std::cout << op.Plus(firstNumber, secondNumber);
		break;
	case 2:
		std::cout << op.Minus(firstNumber, secondNumber);
		break;
	case 3:
		std::cout << op.Star(firstNumber, secondNumber);
		break;
	case 4:
		std::cout << op.Slash(firstNumber, secondNumber);
		break;
	}

	std::cin.get();
	return 0;
}