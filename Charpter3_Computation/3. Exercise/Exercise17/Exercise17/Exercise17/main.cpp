/*
 Write a program where you first enter a set of name-and-value pairs, such as Joe 17and Barbara 22. For each pair, 
 add the name to a vector called names and the number to a vector called scores(in corresponding positions, so that 
 if names[7]=="Joe"then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and terminate 
 with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.

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

	
	std::cout << "\nAll (name, score) pairs:\n\n";
	for (int i = 0; i < names.size(); ++i) 
	{
		if (names[i] == "NoName")
		{
			break;
		}
		else
			std::cout << "(" << names[i] << ", " << scores[i] << ")\t";
	}

		
	std::cout << "\n-------"<<"\n\n";


	return 0;
}