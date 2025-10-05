/*
Write a program that converts spelled-out numbers such as ¡°zero¡± and ¡°two¡± into digits, such as 0 and 2. When the user inputs a number, the program should print out the 
corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I knowif the user enters something that doesn¡¯t correspond, such as stupid computer!

*/


import std;

int main()
{
	std::string spelled_out_numbers;


	std::cout << "Please enter spelled-out numbers,those are constricted with zero, one, two, three, and four. Your input is: ";

	std::cin >> spelled_out_numbers;


	if (spelled_out_numbers == "zero")
		std::cout << "The digit that is corresponding spelled_out_numbers you input, is 0\n ";
	else if (spelled_out_numbers == "one")
		std::cout << "The digit that is corresponding spelled_out_numbers you input, is 1\n ";
	else if (spelled_out_numbers == "two")
		std::cout << "The digit that is corresponding spelled_out_numbers you input, is 2\n ";
	else if (spelled_out_numbers == "three")
		std::cout << "The digit that is corresponding spelled_out_numbers you input, is 3\n ";
	else if (spelled_out_numbers == "four")
		std::cout << "The digit that is corresponding spelled_out_numbers you input, is 4\n ";
	else
		std::cout << "stupid human!,your input is not a number I know.\n";




	return 0;


}
