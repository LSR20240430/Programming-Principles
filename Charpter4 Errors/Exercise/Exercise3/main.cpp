/*
Absolute zero is the lowest temperature that can be reached; it is -273.15C, or 0K. The above program, even 
when corrected, will produce erroneous results when given a temperature below this. Place a check in the main
program that will produce an error if a temperature is given below -273.15C.

*/



#include "PPP.h"

/*
* @brief: convert Celsius to Kelvin
*

*/
double ctod(double c)
{

	double k = c + 273.15;

	return k;

}


int main()
{

	try {
		double c = 0;

		cin >> c;
		if (c <= -273.15)
			error("you input erroneous temperature that is below absolute zero temperature(-273.15)\n");

		double k = ctod(c);

		cout << "Kelvin: " << k << "\n";


		return 0;

	}

	catch (exception& e)
	{
		cerr << "error: " << e.what() << "\n";
		return 1;

	}
	catch (...)
	{
		cerr << "Oops, unknown exceptions.\n";
		return 2;
	}

	
}