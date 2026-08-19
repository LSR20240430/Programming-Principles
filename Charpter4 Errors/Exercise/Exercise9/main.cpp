/*
Modify the program from the previous exercise to write out an error if the result cannot be represented as an 
int

*/

#include "PPP.h"

/*
* @brief: a function get Values of N and return N
* @No parameter
*/
int get_integer()
{
	cout << "we need to calculate the sum of first N values, so we first get values of N.\n";

	int N = 0;
	cin >> N;

	return N;

}

/*
* @brief: read and store integers, then return integers by vector. Terminate by '|'
* @No parameter
*/
vector<int> read_and_store_integers()
{
	cout << "Please enter integer values, terminate by '|'.\n";

	vector<int> integers;
	for (int a = 0; cin >> a;)
	{
		integers.push_back(a);
	}

	if (cin.fail())  // detect status of error
		cin.clear(); // clear status of error

	char terminate = ' ';

	if (cin >> terminate && terminate == '|')  // cin >> terminate will get value from buffer, instead of from keyboard
	{
	}
	else
		error("expected integers or '|' to terminate.\n");




	return integers;
}

/*
* @brief: calculate the sum of values of first N
* @parameter one N: the first N values
* @parameter two integers: the integer values your input
*/
int integers_sum(int N, vector<int> integers)
{
	cout << "we start calculate sum by now.\n";

	int sum = 0;

	if (N > integers.size())
		error("Oops, N of your input exceed the numbers of values\n");


	for (int i = 0; i < N; ++i)
	{
		int integer_values = integers[i];

		// detect if the sum exceeds it's range of int with the way of logic
		if((integer_values > 0 && sum > INT_MAX - integer_values) || (integer_values < 0 && sum < INT_MIN - integer_values))
		{
			error("sum exceeds the range of int.\n");
			break;
		}

		
		sum +=  integer_values;

		
	}

	cout << "the sum of first N values are: " << sum << "\n";

	return sum;
}


int main()
{

	try {
		int N = get_integer();
		vector<int> integers = read_and_store_integers();
		int sum = integers_sum(N, integers);

		return 0;
	}

	catch (exception& e)
	{
		cerr << "error: " << e.what();
		return 1;
	}
	catch (...)
	{
		cerr << "Opos, unknown exception";
		return 2;
	}

}