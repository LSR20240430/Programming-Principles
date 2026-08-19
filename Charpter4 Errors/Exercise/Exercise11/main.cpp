/*
Write a program that writes out the first N values of the Fibonacci series, that is, the series that starts 
with 1 1 2 3 5 8 13 21 34. The next number of the series is the sum of the two previous ones. Find the 
largest Fibonacci number that fits in an int

*/



#include "PPP.h"


/*
* @brief: it will find the largest Fibonacci number that fits in an int.
*/
void Fibonacci_integers()
{
	int a1 = 1, a2 = 1;
	
	for (int i = 0; i < INT_MAX; ++i)
	{
		if (i % 2 == 0)
		{
			if (a1 > INT_MAX - a2)
				error("the next number(a1) will exceed the range of int.\n");
				
			
			a1 = a1 + a2;
			cout << "the " << i + 3 << "number " << a1 << "\n";


		}

		if (i % 2 != 0)
		{
			if (a2 > INT_MAX - a1)	
				error("the next number(a2) will exceed the range of int.\n");
			
			a2 = a2 + a1;
			cout <<"the " << i + 3 << "number " << a2 << "\n";
		}


	}

}





int main()
{
	try {
		Fibonacci_integers();
		return 0;

	}
	catch (exception& e)
	{
		cerr << "error: " << e.what() << "\n";
		return 1;
	}
	catch (...)
	{
		cerr << "Oops, unknown exception!\n";

	}

	return 0;
}
