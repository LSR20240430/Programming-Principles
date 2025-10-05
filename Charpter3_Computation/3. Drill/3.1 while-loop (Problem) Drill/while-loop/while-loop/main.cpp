/*Write a program that consists of a while-loop that (each time around the loop) reads 
in two ints and then prints them. Exit the program when a terminating '|'is entered.
*/

import std;

int main()
{
	int integer_value1 = 0, integer_value2 = 0;

	std::cout << "Please enter two integer values one by one: ";

	while (std::cin >> integer_value1 >> integer_value2)
	{
		
		std::cout << "integer_value1:\t" << integer_value1 << "\tinteger_value2:\t" << integer_value2 << "\n";
       
	}

	return 0;
}