/*
самая опасная программка для пользователя




*/



#include <iostream>

int main() {

	double num1, num2, result;
	char operChar;

	std::cout << "Change operation: +, -, /, * \n";
	std::cin >> operChar;
	std::cout << "Type num1:  ";
	std::cin >> num1;
	std::cout << "Type num2:  ";
	std::cin >> num2;


	switch (operChar)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	
	}

	std::cout << num1 << operChar << num2 << " = " << result << std::endl;

	system("pause");
	return 0;
}