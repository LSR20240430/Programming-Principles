/*
 Write a program that finds the min, max, and mode of a sequence of strings.

*/

import std;

int main()
{
	std::cout << "Please enter a series of strings, and find its min, max, and strings. \n\n ";
	std::vector<std::string> strs;
	int mode = 0;
	std::vector<std::string> compares;

	while (true)
	{

		for (std::string str; std::cin >> str;)
			strs.push_back(str);

		std::sort(strs.begin(), strs.end());

		// calculate mode
		for (std::string str1 : strs)
		{
			compares.push_back(str1);
			
			for (std::string compare : compares)
			{
				if (str1 == compare)
				{
					++mode;
				}
			}
			
			std::cout << "The string value is " << str1 << ". it occurs " << mode << " times.\n\n";
			mode = 0;


		}




		std::cout << "Let us print these tasks.\n\n";
		std::cout << "The min is " << strs[0] << ". The max is " << strs[strs.size() - 1] << "\n";



		std::cout << "clear your input, please enter again.\n\n";
		strs.clear();
		std::cin.clear();
		
	}


	return 0;
}