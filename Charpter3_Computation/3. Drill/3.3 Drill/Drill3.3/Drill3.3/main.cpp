/*Augment the program so that it writes the line the numbers are equal(only) if they are equal.

*/

import std;

int main()
{
	int integer_value1 = 0, integer_value2 = 0;

	std::cout << "Please enter two integer values one by one: ";

	while (std::cin >> integer_value1 >> integer_value2)
	{

		if (integer_value1 > integer_value2)
			std::cout << "the smaller value is: " << integer_value2 << " the larger value is: " << integer_value1 << "\n";
		else if (integer_value1 < integer_value2)
			std::cout << "the smaller value is: " << integer_value1 << " the larger value is: " << integer_value2 << "\n";
		else if(integer_value2 == integer_value1)
			std::cout << "the numbers are equal" << "\n";

	}

	return 0;
}