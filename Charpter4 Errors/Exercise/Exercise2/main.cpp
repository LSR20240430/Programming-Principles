/*
The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many 
errors in it. Find the errors, list them, and correct the code.


*/


/* Original program

#include "PPP.h"

double ctok(double c)
{
	int k = c + 273.25;
	return int;



}

int main()
{
	double c = 0;

	cin >> d;

	double k = ctok("c");

	Cout << k << "\n";

	return 0;
}

*/


// correct program

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
	
	
	double c = 0;

	cin >> c;

	double k = ctod(c);

	cout << "Kelvin: " << k;



	return 0;
}