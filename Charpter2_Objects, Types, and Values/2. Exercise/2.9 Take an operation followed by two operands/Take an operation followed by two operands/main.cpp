/*
Write a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 45
Read the operation into a string called operationand use an if-statement to figure out which operation the user wants, for example, if (operation=="+"). Read the operands into 
variables of type double. Implement this for operations called +, −, *, /, plus, minus, mul, and divwith their obvious meanings.

*/

import std;

int main()
{
	std::string operation;
	
	double operand1 = 0, operand2 = 0;

	std::cout << "Please enter the string operation(+,-,*,/) and two operands: ";

	std::cin >> operation >> operand1 >> operand2;

	if (operation == "+")
		std::cout << "The result of operand1 + operand2 is: " << operand1 + operand2 <<"\n";
	else if (operation == "-")
		std::cout << "The result of operand1 - operand2 is: " << operand1 - operand2 <<"\n";
	else if (operation == "*")
		std::cout << "The result of operand1 * operand2 is: " << operand1 * operand2 << "\n";

	else if (operation == "/")
	{
		if (operand2 == 0)
			std::cout << "The result of operand1 / operand2 is error (operand2 = 0)"<< "\n";
		else
			std::cout << "The result of operand1 / operand2 is: " << operand1 / operand2 <<"\n";
	}
	else
		std::cout << "It is not a string I know\n";





	return 0;
}