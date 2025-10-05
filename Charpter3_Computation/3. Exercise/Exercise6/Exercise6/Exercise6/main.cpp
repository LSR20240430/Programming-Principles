/*
Make a vectorholding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a digit to its 
corresponding spelled-out value; e.g., the input 7gives the output seven. Have the same program, using the same input loop, 
convert spelled-out numbers into their digit form; e.g., the input sevengives the output 7

*/

import std;


int main()
{
	
	std::cout << "Please enter the number between 0 and 9, You can also input the spelled-out number, e.g 'zero'" << "\n";
	
	std::vector<std::string> numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	std::string your_input;

	

	while (true)
	{
		std::cin >> your_input;

		if (your_input.length() == 1)
		{
			int digit = std::stoi(your_input);
			std::cout << "your enter is digit number " << digit << "\n";
			std::cout << "the corresponding spelled-out of your input is " << numbers[digit] <<"\n";
		}
		else
		{
			int i = 0;

			for (std::string number : numbers)
			{
				++i;
				if (your_input == number)
				{
					std::cout << "your input is spelled-out number " << your_input << "\n";
					std::cout << "the corresponding digit of your input is " << i -1 << "\n";
					break;
				}
				
			}



		}





	}
	return 0;
}