/*
Write a program that converts from Celsius to Fahrenheit and from Fahrenheit to Celsius. Use estimation 
(¡ì4.7.1) to see if your results are plausible.

*/

#include "PPP.h"

/*
* @brief: convert Celsius to Fahrenheit

*/
double ctof(double c)
{

	if (c <= -273.15)
		error("you input erroneous temperature that is below absolute zero temperature(-273.15C)\n");

	double f = c * 1.8 + 32;

	return f;

}

/*
* @brief: convert Kelvin to Celsius

*/
double ftoc(double f)
{
	if (f <= -459.67)
		error("you input erroneous temperature that is below absolute zero temperature(-459.67F)\n");

	double c = (f - 32) / 1.8;

	return c;

}



int main()
{


	double temp = 0;
	char ch = ' ';

	cout << "Please enter value of temperature (Celsius or Fahrenheit) followed by its unit(C or F).\n";

	cin >> temp >> ch;

	try {
		if (ch == 'C')
		{
			double f = ctof(temp);
			cout << "Fahrenheit is " << f << "\n";
		}
		else if (ch == 'F')
		{
			double c = ftoc(temp);
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