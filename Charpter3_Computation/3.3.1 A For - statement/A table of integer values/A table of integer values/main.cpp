// Use a loop to write out a table of characters with their corresponding integer values 

import std;

int main()
{
	
	int integer = 0;

	std::cout << "Table of the integer values for lowercase letters and digits: \n\n";


	for (char i = 'a';i <= 'z';++i)
	{
		integer = i;
		std::cout << i << "\t" << integer <<"\n";
		

	}

	std::cout << "\nTable of the integer values for uppercase letters and digits: \n\n";
	
	for (char i = 'A';i <= 'Z';++i)
	{
		integer = i;
		std::cout << i << "\t" << integer << "\n";


	}


	return 0;
}