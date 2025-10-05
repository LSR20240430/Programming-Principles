/*
Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math 
operations ¨C add, subtract, multiply, and divide ¨C on two input values. Your program should prompt the user to enter 
three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the 
program output should be The sum of 35.6 and 24.1 is 59.7.
*/

import std;

int main()
{
	std::cout << "Hey! I am a calculator. You enter three arguments: 35.6, 24.1, and '+', the program output should be the sum of 35.6 and 24.1, and '+' ";
    
	double operator1 = 0.0, operator2 = 0.0;
	char operation_representation = ' ';

	while (true)
	{
		std::cout << "Please enter two double values followed by one operation: '+', '-', '*', '/' :";
		std::cin >> operator1 >> operator2 >> operation_representation;

		switch (operation_representation){
		
		case '+':
			std::cout << "the result is: " << operator1 + operator2 << "\n";
			break;
           
		case '-':
			std::cout << "the result is: " << operator1 - operator2 << "\n";
			break;
        
		case '*':
			std::cout << "the result is: " << operator1 * operator2 << "\n";
			break;

		case '/':
			std::cout << "the result is: " << operator1 / operator2 << "\n";
			break;

		default: 
			std::cout << " I don't know the error character you enter." << "\n";
			break;
		}

	}



	return 0;
}