/*
odify the program above to ask the user to enter floating-point values and store them in doublevariables. Compare the outputs of the two programs for some inputs of your choice. 
Are the results the same? Should they be? What¡¯s the difference?

*/

import std;

int main()
{
	double val1 = 0, val2 = 0;

	std::cout << "Please enter the two values: ";


	std::cin >> val1 >> val2;

	if (val1 == val2)

		std::cout << "val1 is equal to val2";

	else if (val1 > val2)

		std::cout << val1 << " is larger, " << val2 << " is smaller";
	else

		std::cout << val2 << " is larger, " << val1 << " is smller";


	std::cout << "\nsum is val1 + val2 = " << val1 + val2;
	std::cout << "\ndifference is val1 - val2 = " << val1 - val2;
	std::cout << "\nproduct is val1 * val2 = " << val1 * val2;

	if (val2 != 0)
		std::cout << "\nration is val1 / val2 = " << val1 / val2;
	else
		std::cout << "\nundefined ration: val1 / val2 (val2 = 0)";


	return 0;
}