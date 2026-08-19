/*
Do exercise 3again, but this time handle the error inside ctok()

*/

/*
* mythinking: if here we use expect() to test precondition in function ctod() and try-catch block in main 
fuction. That would be very good.

*/

#include "PPP.h"

/*
* @brief: convert Celsius to Kelvin
*

*/
double ctok(double c)
{
	try {
		if (c <= -273.15)
			error("you input erroneous temperature that is below absolute zero temperature(-273.15)\n");
		double k = c + 273.15;

		return k;
	}
	catch(exception& e)
	{
		cerr << "error: " << e.what() << "\n";

	}
	catch (...)
	{
		cerr << "Oops, unknown exceptions.\n";
	}


	

}


int main()
{

	
		double c = 0;

		cin >> c;
		
		double k = ctok(c);

		cout << "Kelvin: " << k;

		return 0;

	




}