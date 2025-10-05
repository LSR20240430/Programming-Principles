
import std;

int main()
{

	std::cout << "Please enter your first name, second name and age\n";

	std::string first = "?";
	std::string second = "?";
	int age = -1;

	// reading of strings is terminated by white space, that is , space, newline, and tab characters
	std::cin >> first >> second >> age;

	std::cout << "first name: " << first << " \nsecond name: " << second << " \nage using months : " << age * 12 ;

	return 0;
	


}