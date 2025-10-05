/*
Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and complete. In other words, don¡¯t just output yesor no. 
Your output should stand alone, like The value 4 is an even number. Hint: See the remainder (modulo) operator in ¡ì2.4

*/

import std;

int main()
{
	int val1 = 0;


	std::cout << "Please enter a integer value to determine if it is odd or even: ";

	std::cin >> val1;

	if (val1 % 2 != 0)
		std::cout << "The value "<< val1 << " is odd number\n";
	else
		std::cout << "The value "<< val1 << " is even number\n";

	

	return 0;
}