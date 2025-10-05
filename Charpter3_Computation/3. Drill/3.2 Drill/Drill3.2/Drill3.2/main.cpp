/*Change the program to write out the smaller value is:followed by the smaller of the numbers and the larger value is:
followed by the larger value.
*/

import std;

int main()
{
	int integer_value1 = 0, integer_value2 = 0;

	std::cout << "Please enter two integer values one by one: ";

	while (std::cin >> integer_value1 >> integer_value2)
	{

		if(integer_value1 > integer_value2)
			std::cout << "the smaller value is: " << integer_value2 << " the larger value is: " << integer_value1 << "\n";
		else
			std::cout << "the smaller value is: " << integer_value1 << " the larger value is: " << integer_value2 << "\n";
	}

	return 0;
}