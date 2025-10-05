/*
Write a program that prompts the user to enter two integer values. Store these values in intvariables named val1and val2. Write your program to determine the smaller, larger, 
sum, difference, product, and ratio of these values and report them to the user.

*/

import std;

int main()
{
	int val1 = 0, val2 = 0;
    
	std::cout << "Please enter the two integer values: ";


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