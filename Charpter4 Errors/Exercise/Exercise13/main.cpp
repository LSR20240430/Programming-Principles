/*
 The program is a bit tedious because the answer is hard-coded into the program. Make a version where the 
 user can play repeatedly (without stopping and restarting the program) and each game has a new set of four
 digits. You can get four random digits by calling the random number generator random_int(0,9)from
 PPP_support(and ¡ì4.7.5) four times. You will note that if you run that program repeatedly, it will pick 
 the same sequence of four digits each time you start the program. To avoid that, ask the user to enter a 
 number (any number) and call seed(n), also from PPP_support, where nis the number the user entered before 
 calling random_int(0,10). Such an nis called a seed, and different seeds give different sequences of random 
 numbers.

*/


#include "PPP.h"



vector<int> four_differents()
{

	cout << "Start getting a vector of four different integers in the range 0 to 9.\n";
	cout << "--------------------------\n";

	vector<int> four_differents;
	bool is_four_times = false;


	
	cout << "Please enter any number.\n";
	double n = 0.0;
	cin >> n;
	if (cin.fail())
	{
		cin.clear();

		// clear buffer of input so that cin() function can affect in the next loop. 
		string temp;
		cin >> temp;

	}
	
	seed(n);

	int a = random_int(0, 9);


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
				if (i + 1 == four_differents.size())
					four_differents.push_back(b);
			}

		}

		if (four_differents.size() == 4)
			is_four_times = 4;


	}

	for (int i = 0; i < four_differents.size(); ++i)
		cout << "the number [" << i << "]= " << four_differents[i] << "\t\n";

	cout << "----------------------------\n";

	return four_differents;

}

/*
* @brief: Guessing four integer numbers, first you get the four intger values from you keyboard.
* @parameter four_differents: a random vector that was produced a random function.
*/
void guess_function(vector<int> four_differents)
{
	cout << "----------------------------\n";
	cout << "Let's start guessing. First, you enter four integer numbers.\n";


	bool is_four_bulls = false;
	int bulls = 0;

	while (!is_four_bulls)
	{
		vector<int> four_number_useer;

		// get four numbers of integer from user input.
		cout << "Now. You can enter four integers numbers.\n";
		for (int a = 0; cin >> a;)
			four_number_useer.push_back(a);

		// ensure cin function can effect in the next loop.
		if (cin.fail())
		{
			cin.clear();

			// clear buffer of input so that cin() function can affect in the next loop. 
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
			is_four_bulls = true;
			cout << "You are so good, you are totally correct.You have 4 bulls.\n";

		}

	}


}


int main()
{
	while (true)
	{
		vector<int> four_different = four_differents();
		guess_function(four_different);

	}
	


	return 0;
}