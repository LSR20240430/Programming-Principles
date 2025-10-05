/*
Write a program that plays the game ¡°Rock, Paper, Scissors.¡± If you are not familiar with the game do some research 
(e.g., on the Web using Google). Research is a common task for programmers. Use a switch-statement to solve this exercise. 
Also, the machine should give random answers (i.e., select the next rock, paper, or scissors randomly). Real randomness is too
hard to provide just now, so just build a vectorwith a sequence of values to be used as ¡°the next value.¡± If you build the 
vectorinto the program, it will always play the same game, so maybe you should let the user enter some values. Try variations to 
make it less easy for the user to guess which move the machine will make next.

*/

import std;

int main()
{
	std::cout << "Hi,human being let's play Game: Rock, Paper, Scissors.\n\n";
	std::cout << "You enter rock, paper, or scissors.\n\n";

	std::vector<std::string> games = { "rock", "paper","scissors","scissors","rock","paper","paper","rock","scissors","rock", "paper","scissors","scissors","rock","paper","paper","rock","scissors" };

	std::string user_input;
	int i = 0;

	for (std::string game : games)
	{
		std::cin >> user_input;
		std::cout << "game " << ++i << "\n\n\n";

		if (game[0] == 'r')
		{
			switch (user_input[0])
			{
			case 'r':
				std::cout << "We are tie.\n\n";
				break;
			case 'p':
				std::cout << "You win this service.\n\n";
				break;
			case 's':
				std::cout << "I win, you lost.\n\n";
				break;
			default:
				break;

			}
		}
		else if (game[0] == 'p')
		{
			switch (user_input[0])
			{
			case 'p':
				std::cout << "We are tie.\n\n";
				break;
			case 's':
				std::cout << "You win this service.\n\n";
				break;
			case 'r':
				std::cout << "I win, you lost.\n\n";
				break;
			default:
				break;

			}
		}
		else if (game[0] == 's')
		{
			switch (user_input[0])
			{
			case 's':
				std::cout << "We are tie.\n\n";
				break;
			case 'r':
				std::cout << "You win this service.\n\n";
				break;
			case 'p':
				std::cout << "I win, you lost.\n\n";
				break;
			default:
				break;

			}
		}
		else
		{
			std::cout << "I dont know you enter, you must enter rock, paper, scissors.\n\n";


		}

		
	}
	return 0;
}