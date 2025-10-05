/*
n the drill, you wrote a program that, given a series of numbers, found the max and min of that series. The number that appears 
the most times in a sequence is called the mode. Create a program that finds the mode of a set of positive integers.

*/


import std;

int main()
{
	std::cout << "Please enter a series of positive integer values from user input, then output the mode value and count how many times mode occured: \n\n";
	std::cout << "The program can not automatically calculate the mode.it just print, you need to calculate yourself\n";
	std::cout << "The program is not good, it will prints same values of many times, you need to see the the last occur of same value,that is right.\n\n ";
	std::vector<int> positive_integers;
	std::vector<int> compares;
	int max = 0;
	int count_loop = 0;
	std::vector <int> maxs;

	while (true)
	{
		
		for (int positive_integer; std::cin >> positive_integer;)
		{
			positive_integers.push_back(positive_integer);

		}

		for (int i : positive_integers)
		{
			compares.push_back(i);
			for (int compare : compares)
			{
				if (i == compare)
				{
					++max;

				}

			}

			
			maxs.push_back(max);
			max = 0;


			std::cout << "the value is " << i << ". times is " << maxs[count_loop] << "\n";
			++count_loop;


		}

		positive_integers.clear();


	}


	return 0;
}