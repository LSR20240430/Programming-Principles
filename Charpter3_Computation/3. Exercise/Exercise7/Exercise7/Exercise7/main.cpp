/*
 Modify the ¡°mini calculator¡± from exercise 6 to accept (just) single-digit numbers written as either digits or spelled out.

*/

import std;

int main()
{
	std::cout << "Hey! I am a calculator.\n";

	std::string operator1, operator2;
	char operation_representation = ' ';
	std::vector<std::string> numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	
	int operator1_integer = 0, operator2_integer = 0;

	while (true)
	{
		std::cout << " You enter three arguments: two single-digit numbers written as either digits or spelled out, followed by operation one operation: '+', '-', '*', '/':";
		std::cin >> operator1 >> operator2 >> operation_representation;


		// convertion string to int (operator1)

		if (operator1.length() == 1)
		{
			operator1_integer = std::stoi(operator1);

		}
		else
		{
			int i_operator1 = -1;
			for (std::string number : numbers)
			{
				++i_operator1;
				if (operator1 == number)
				{
					operator1_integer = i_operator1;
					break;
				}
					
			}

		}

		// convertion string to int (operator2)

		if (operator2.length() == 1)
		{
			operator2_integer = std::stoi(operator2);

		}
		else
		{
			int i_operator2 = -1;
			for (std::string number : numbers)
			{
				++i_operator2 ;
				if (operator2 == number)
				{
					operator2_integer = i_operator2;
					break;
				}

			}

		}


		
			switch (operation_representation) {

			case '+':
				std::cout << "the result is: " << operator1_integer + operator2_integer << "\n";
				break;

			case '-':
				std::cout << "the result is: " << operator1_integer - operator2_integer << "\n";
				break;

			case '*':
				std::cout << "the result is: " << operator1_integer * operator2_integer << "\n";
				break;

			case '/':
				std::cout << "the result is: " << operator1_integer / operator2_integer << "\n";
				break;

			default:
				std::cout << " I don't know the error character you enter." << "\n";
				break;
			}

		

		

	}



	return 0;
}