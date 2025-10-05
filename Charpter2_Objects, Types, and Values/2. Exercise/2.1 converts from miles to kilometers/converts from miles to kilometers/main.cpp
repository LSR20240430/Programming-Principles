/*
Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles. Hint: A mile is1.
609 kilometers.

*/


import std;

int main()
{

	double mile = 0;
	double kilometer = 0;

	std::cout << "Please enter the values of miles: ";

	while (std::cin >> mile)
	{
		if (mile <= 0)
		{
			std::cout << "Your input is error\n";
		}

		else
		{
			kilometer = 1.609 * mile;
			std::cout << "covert from mile to kilometer: "<< mile << "mile =" << kilometer << "kilometer";
  

		}

		return 0;

	}


}