
/*
Modify the program from the previous exercise so that once you have entered the name-and-value pairs, you ask for 
names: In a loop, when you enter a value, the program will output all the names with that score or score not found

*/


import std;

int main()
{
	std::cout << "Please enter a set of name-and-values, such as Joe 17....\n";
	std::cout << "We assume the first name that user input is not 'NoName'\n\n";

	std::vector<std::string> names;
	std::vector<int> scores;
	std::vector<std::string> compare_names;


	std::string name1;
	int score1 = 0;
	bool error = false;
	int compare_count = 0; // if it is not equal 1 for each loop, that means the name you input occurs twice;


	// We assume the first name that user input is not "NoName"
	std::cin >> name1 >> score1;
	names.push_back(name1);
	scores.push_back(score1);

	compare_names.push_back(name1);


	while (name1 != "NoName" && !error)
	{
		std::cin >> name1 >> score1;

		compare_names.push_back(name1);

		for (std::string compare_name : compare_names)
		{
			if (name1 == compare_name)
				++compare_count;

		}
		if (compare_count != 1)
		{
			std::cout << "Error '" << name1 << "' already exists" << "\n";
			error = true;
		}
		else
		{
			names.push_back(name1);
			scores.push_back(score1);
		}

		// clear compare_count to 0.

		compare_count = 0;

	}


	std::cout << "\nLet us enter into a lookup. You type score,If found,I output all the names with that socre or score not found.\n\n";

	while (true)
	{
		int user_input2 = 0;
		bool is_found_value = false;
		std::cin >> user_input2;

		for (int i = 0; i < scores.size();++i)
		{
			if (user_input2 == scores[i])
			{
				std::cout << "I found that value, its name is " << names[i] << "\t";
				is_found_value = true;

			}

		}

		std::cout << "\n\n";
		if (!is_found_value)
		{
			std::cout << "score not found\n";
			bool is_found_value = false;
		}





	}


	return 0;
}