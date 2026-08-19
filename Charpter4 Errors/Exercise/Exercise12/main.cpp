/*
Implement a little guessing game called (for some obscure reason) ¡°Bulls and Cows.¡± The program has a 
vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122) and it is the user¡¯s task to 
discover those numbers by repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359;
the response should be ¡°1 bull and 1 cow¡± because the user got one digit (1) right and in the right 
position (a bull) and one digit (3) right but in the wrong position (a cow). The guessing continues until the 
user gets four bulls, that is, has the four digits correct and in the correct order.

*/

#include "PPP.h"



vector<int> four_differents()
{

	cout << "Start getting a vector of four different integers in the range 0 to 9.\n";
	cout << "--------------------------\n";

	vector<int> four_differents;
	int a = random_int(0, 9);
	bool is_four_times = false;
	

	four_differents.push_back(a);

	while (!is_four_times)
	{
		int b = random_int(0, 9);

		for (int i = 0; i < four_differents.size(); ++i)
		{
			
			if (b == four_differents[i])
				break;
			else
			{
				if ( i + 1 == four_differents.size())
					four_differents.push_back(b);
			}

		}

		if (four_differents.size() == 4)
			is_four_times = 4;


	}

	/*for (int i = 0; i < four_differents.size(); ++i)
		cout << "the number [" << i << "]= " << four_differents[i] << "\t\n";*/
	
	cout << "----------------------------\n";

	return four_differents;

}

/*
* @brief: Guessing four integer numbers, first you get the four intger values from you keyboard.
* @parameter four_differents: a random vector that was produced a random function.
*/
void guess_function(vector<int> four_differents)
{
	cout << "Let's start guessing. First, you enter four integer numbers.\n";
		
	
	bool is_four_bulls = false;
	int bulls = 0;
	
	while (!is_four_bulls)
	{
		vector<int> four_number_useer;  // keep iss location into loop, so that each loop will initialize this vector.

		// get four numbers of integer from user input.
		cout << "Now. You can enter four integers numbers.\n";
		for (int a = 0; cin >> a;)
			four_number_useer.push_back(a);
		
		// ensure cin function can effect in the next loop.
		if (cin.fail())
		{
			cin.clear();
			
			// must clear buffer of input so that cin() function can affect in the next loop. 
			string temp;
			cin >> temp;

		}
			

		for (int i = 0; i < four_number_useer.size(); ++i)
		{
			for (int j = 0; j < four_differents.size(); ++j)
			{
				if (four_number_useer[i] == four_differents[j])
				{
					if (i == j)
					{
						cout << "you get one bull. the values is " << four_number_useer[i] << ". the position is the number " << i + 1 << " .\n";
						++bulls;
					}
					else
						cout << "you get one cow. the values is " << four_number_useer[i] << ". the position is the number " << i + 1 << " .\n";

				}

			}

		}

		if (bulls == 4)
		{
			bulls = 0;
			cout << "You are so good, you are totally correct.You have 4 bulls.\n";

		}

	}


}









int main()
{
	vector<int> four_different = four_differents();
	guess_function(four_different);
	

	return 0;
}