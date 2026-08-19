/*
Like random_int(), random_letters()can be found in PPP_support. We might use that to generate a 
vector of (name,value) pairs for testing

*/

#include "PPP.h"


/*
* @brief: generate a string with between n and m random lower-case characters
*
*/
string random_letters(int n, int m)
{

	//a string with a size in the [n:m] range
	string s(random_int(n, m), 'x');

	for (char& ch : s)
		// a lower-case letter
		ch = narrow<char>(random_int('a', 'z'));

	return s;

}

/*
* @brief: generate n random (name,value) pairs

*/
vector<pair<string, int>> generate(int n)
{
	vector <pair<string, int>> res;

	for (int i = 0; i < n; ++i)
		res.push_back({random_letters(4,24),random_int(1'000'000) });
	return res;

}

int main()
{

	vector <pair<string, int>> res = generate(5);

	
	for (const pair<string, int>& element : res)
	{
		std::cout << "Name: " << element.first << ", Value: " << element.second << "\n";
	}


	return 0;
}


/*
* learning:for (char& ch : s)
char& ch: Declares a reference to a character variable ch

s: The string (or any iterable container) to traverse

:: Means "in"

In each loop iteration:

ch becomes a reference (alias) to the current character in s

Modifying ch directly modifies the original character in the string

Automatically iterates through the entire string without manual index management

*/