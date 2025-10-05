/*Write a program that reads a string from input and then, for each character read, prints out the character and its integer 
value on a line.
*/
import std;

int main()
{

	std::string str_input;
	int cha_to_integer = 0;

	while(std::cin >> str_input)
	{ 
		for (char get_char : str_input)
		{
			
			int cha_to_integer = get_char;
			std::cout << "character is: " << get_char << " its responding value is: " << cha_to_integer<<"\n";
		}
	
	}
	
	return 0;

}