
/*
Modify the program from the previous exercise so that once you have entered the name-and-value pairs, you ask for values: 
In a loop, when you enter a name, the program will output the corresponding score or name not found
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


	std::cout << "\nLet us enter into a lookup. You type name,If found,I reply its corresponding score. If not I reply 'name not found'\n\n";
	
	while (true)
	{
		bool is_found_name = false;
		
		std::string user_input2;
		std::cin >> user_input2;

		for (int i = 0; i < names.size();++i)
		{
			if (user_input2 == names[i])
			{
				std::cout << "I found the name: " << user_input2 << ", and its score is " << scores[i] << "\n";
				is_found_name = true;

			}
				
			

		}

		if (!is_found_name)
		{
			std::cout << "not found name.\n";
			is_found_name = false;
		}
			



	}


	return 0;
}