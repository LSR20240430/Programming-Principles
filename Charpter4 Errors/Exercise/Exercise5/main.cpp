/*
Add to the program so that it can also convert from Kelvin to Celsius.

*/

#include "PPP.h"

/*
* @brief: convert Celsius to Kelvin

*/
double ctok(double c)
{
	
	if (c <= -273.15)
		error("you input erroneous temperature that is below absolute zero temperature(-273.15C)\n");

	double k = c + 273.15;

	return k;

}

/*
* @brief: convert Kelvin to Celsius

*/
double ktoc(double k)
{
	if(k <= 0)
		error("you input erroneous temperature that is below absolute zero temperature(0K)\n");

	double c = k - 273.15;

	return c;

}



int main()
{


	double temp = 0;
	char ch = ' ';
	
	cout << "Please enter value of temperature (Celsius or Kelvin) followed by its unit(C or K).\n";

	cin >> temp >> ch;
	
	try {
		if (ch == 'C')
		{
			double k = ctok(temp);
			cout << "Kelvin is " << k << "\n";
		}
		else if (ch == 'K')
		{
			double c = ktoc(temp);
			cout << "Celsius is " << c << "\n";
		}
		else
			error("your input of unit was erroneous.\n");
		
		return 0;

	}
	catch (exception& e)
	{
		cerr << "error£º " << e.what() << "\n";
		return 1;

	}
	catch (...)
	{
		cerr << "Oops, unknown exceptions.\n";
		return 2;

	}


}