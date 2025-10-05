/*
Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck

*/

import std;

int main()
{
    std::string a, b, c;

	std::cout << "Please enter three string values a, b, c: ";

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