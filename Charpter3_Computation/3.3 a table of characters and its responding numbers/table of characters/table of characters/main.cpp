// Use a loop to write out a table of characters with their corresponding integer values 

import std;

int main()
{
	char i = 'a';
	int integer = 0;



	while (i <= 'z')
	{

		integer = i;
		std::cout << i << "\t" << integer ;



		++i;
	}
	



	return 0;
}