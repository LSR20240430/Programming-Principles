import std;

// read and compare strings(names)
int main()
{
	std::cout << "Plesase enter two names\n";
	
	std::string first = "???";
	std::string second = "???";

	std::cin >> first >> second;

	if (first == second)
		std::cout << "That's the same name twice \n";
	if (first < second)
		std::cout << first << "is alphabetically before" << second;
	if (first > second)
		std::cout << first << "is alphabetically after" << second;

	return 0;



}