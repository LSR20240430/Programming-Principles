/*
Once we have random numbers, we can generate random sequences of values of other types. 
For example, this generates random strings that we might use to test algorithms over containers of strings:

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




int main()
{

	cout << random_letters(4, 5) << "\n";
	cout << random_letters(4, 24) << "\n";

	return 0;
}