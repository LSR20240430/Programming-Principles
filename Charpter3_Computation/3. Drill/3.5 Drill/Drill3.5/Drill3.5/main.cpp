/*Change the program so that it writes out the numbers are almost equalafter writing out which is the larger and 
the smaller if the two numbers differ by less than 1.0/100.
*/

import std;

int main()
{
	double float_value1 = 0, float_value2 = 0, difference = 1.0 / 100;

	std::cout << "Please enter two float values one by one: ";


	while (std::cin >> float_value1 >> float_value2)
	{

		if (float_value1 > float_value2)
			std::cout << "the smaller value is: " << float_value2 << " the larger value is: " << float_value1 << "\n";
		else if (float_value1 < float_value2)
			std::cout << "the smaller value is: " << float_value1 << " the larger value is: " << float_value2 << "\n";
		
		if (std::abs(float_value1 - float_value2) < difference)
			std::cout << "the numbers are almost equal" << "\n";

	}

	return 0;
}