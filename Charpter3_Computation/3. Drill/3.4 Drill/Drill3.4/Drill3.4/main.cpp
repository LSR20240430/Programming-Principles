/*Change the program so that it uses doubles instead of ints.

*/

import std;

int main()
{
	double float_value1 = 0, float_value2 = 0;

	std::cout << "Please enter two float values one by one: ";

	while (std::cin >> float_value1 >> float_value2)
	{

		if (float_value1 > float_value2)
			std::cout << "the smaller value is: " << float_value2 << " the larger value is: " << float_value1 << "\n";
		else if (float_value1 < float_value2)
			std::cout << "the smaller value is: " << float_value1 << " the larger value is: " << float_value2 << "\n";
		else if (float_value1 == float_value2)
			std::cout << "the numbers are equal" << "\n";

	}

	return 0;
}