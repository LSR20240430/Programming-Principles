import std;

int main()
{
	std::string previous;

	std::string current;
	
	std::cout << "Please enter current£º ";

	while (std::cin >> current) //read a stream of word
	{
		if (previous == current) // check if the word is the same as the last
			std::cout << "repeated word:" << current << "\n";
		
		previous = current;
			


	}

	return 0;


}