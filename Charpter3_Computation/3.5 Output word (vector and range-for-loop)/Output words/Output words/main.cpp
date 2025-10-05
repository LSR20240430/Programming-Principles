//Output words you like with itself, and words you don't like with "BLEEP"

import std;


int main()
{
	std::vector<std::string>words;
	std::vector<std::string>disliked = { "Broccoli", "Carrot", "Cheater" };
	std::cout << "Please enter words: ";

	bool is_disliked = false;

	
	for (std::string word; std::cin >> word;) 
	{
		
		words.push_back(word);
		
		// iteration words I don't like, If find, break range-for-loop
		for (std::string dislike : disliked) 
		{
			is_disliked = false;
			if (word == dislike)
			{
				is_disliked = true;
				break;
			}
		}

		if (is_disliked)
			std::cout << "BLEEP\n";
		else if(!is_disliked)
			std::cout << "Words I like:\t" << word << "\n";


	
	}


	return 0;
}