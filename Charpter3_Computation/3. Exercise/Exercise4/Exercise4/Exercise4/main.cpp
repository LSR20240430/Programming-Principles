/*
Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program asks 
questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program 
should be able to identify the number after asking no more than seven questions.
*/


// Binary search

import std;

int main()
{
	int low = 1, high = 100, guesses = 0;
	std::string response;


	std::cout << "Let's play a number guessing game, you think of a number between 1 and 100.\n";
	std::cout << "I will correctly guess your thinking number after asking no more than seven questions.Your reply me with yes or no\n\n";

	while (low < high)
	{
		int mid = low + (high - low) / 2;
		++guesses;

		std::cout << "question " << guesses << " Is the number you are thinking of less than " << mid << "\n";
		std::cin >> response;
		if (response == "yes")
			high = mid  -1;    // range[low , mid -1]
		else if (response == "no")
			low = mid;     // range[low , high]
		else
		{
			std::cout << "Stupid person, your input is not correct.\n";
			--guesses;
			continue;
		}
		
		if (low == high - 1) {
			low = high;  // 手动推进到边界
		}
		
		
		if (guesses >= 7)
			break;

		
	}
	
	std::cout << "You number is " << low << "\n";
	std::cout << "\nI guess your thinking number in  " << guesses << " questions\n";

	std::cout << "Is my answer correct?(yes or no)\n";
	std::cin >> response;
	if (response == "yes")
		std::cout << "I am a super man!\n";
	else if (response == "no")
		std::cout << "You are absolutely not correct, machine never get wrong.\n";


	return 0;
}