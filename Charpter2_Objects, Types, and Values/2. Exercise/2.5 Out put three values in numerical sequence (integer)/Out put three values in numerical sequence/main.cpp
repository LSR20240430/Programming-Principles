/*
rite a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. So, if the user enters the values 10 4 6, 
the output should be 4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4 5 4should give 4, 4, 5

*/

import std;

int main()
{
	int a = 0, b = 0, c = 0;

	std::cout << "Please enter three interger values a, b, c: ";
	
	std::cin >> a >> b >> c;
	
	if (a >= b)
	{
		if (b >= c)
			std::cout << "Output the three integer values in numerical sequence: " << c << ", " << b << ", " << a << "\n";
		else if (a >= c)
			std::cout << "Output the three integer values in numerical sequence: " << b << ", " << c << ", " << a << "\n";
		else
			std::cout << "Output the three integer values in numerical sequence: " << b << ", " << a << ", " << c << "\n";

	}
	else
	{
		if (a >= c)
			std::cout << "Output the three integer values in numerical sequence: " << c << ", " << a << ", " << b << "\n";
		else if (b >= c)
			std::cout << "Output the three integer values in numerical sequence: " << a << ", " << c << ", " << b << "\n";
		else
			std::cout << "Output the three integer values in numerical sequence: " << a << ", " << b << ", " << c << "\n";


	}
	


	return 0;
}