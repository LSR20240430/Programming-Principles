/*
Quadratic equations are of the form a*x2+ b*x+ c= 0. To solve these, one uses the quadratic 
formula: x=?b¡Àb2?4ac2a. There is a problem, though: if b2- 4ac is less than zero, then it will fail. Write a 
program that can calculate x for a quadratic equation. Create a function that prints out the roots of a 
quadratic equation, given a, b, c. When the program detects an equation with no real roots, have it print out 
a message. How do you know that your results are plausible? Can you check that they are correct?

*/

#include "PPP.h"

/*
* @ brief: calculate the roots of quadratic_equation, and if it was not reals roots, you need to report.
* @ parameter a: quadratic coefficient (a cannot be equal to zero)
* @ parameter b: linear coefficient
* @ parameter c: constant term
* 
*/
void calculate_quadratic_equation(double a, double b, double c)
{
	
	if(a == 0)
		error("the equation is not a quadratick equation, but linear equation");
	
	double solution1 = 0.0, solution2 = 0.0;
	double divided_right = 0.0;
	divided_right = sqrt(b * b - 4 * a * c);
	solution1 = (-b + divided_right) / (2 * a);
	solution2 = (-b - divided_right) / (2 * a);

	// Precondition: if (b * b - 4 * a * c) in quadratic equation < 0, the solution of quadratic equation would not be real roots.
	if (divided_right < 0)
		error("the solution are not real roots.\n");
	
	cout << "solution1 is " << solution1 << ". solution2 is " << solution2 << "\n";


}

int main()
{

	double a = 0.0, b = 0.0, c = 0.0;
	try {
		while (cin >> a >> b >> c)
			calculate_quadratic_equation(a, b, c);
		
		return 0;

	}
	catch (exception& e)
	{
		cerr << "error: " << e.what() << "\n";
		return 1;

	}

	catch (...)
	{
		cerr << "Oops, unknown exception.\n";
		
		return 2;

	}

}