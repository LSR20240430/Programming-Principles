/*
Write a program to solve quadratic equations. A quadratic equation is of the form ax2+ bx+ c= 0. If you don¡¯t know the formula 
for solving such an expression, do some research. Remember, researching how to solve a problem is often necessary before a 
programmer can teach the computer how to solve it. Use doubles for the user inputs for a, b, and c. Since there are two solutions
to a quadratic equation, output both x1and x2

*/

// the solution is nonsense when the divided_right is less than zero. Because the argument of std::sqrt() doesn't get negative value.


import std;


int main()
{
	std::cout << "Hi, I am want to calculate the solutios of quadratic equation: a*x*x + b*x + c == 0:\n ";
	std::cout << "You just enter doubles values a, b, and c. I will calcualted the soulutions.\n";
	std::cout << "Please enter a(a!=0) followed by b amd c.\n";
	
	
	
	double a = 0.0, b = 0.0, c = 0.0;
	double solution1 = 0.0, solution2 = 0.0;
	double divided_right = 0.0;

	
	while (std::cin >> a >> b >> c)
	{
		divided_right = std::sqrt(b * b - 4 * a * c);
		solution1 = (-b + divided_right) / (2 * a);
		solution2 = (-b - divided_right) / (2 * a);

		std::cout << "Debug info:\n";
		std::cout << "b = " << b  << " a = " << a <<" c =" << c <<"\n";
		std::cout << "divided_right = " << divided_right << "\n";
		std::cout << "-b + divided_right = " << (-b + divided_right) << "\n";
		std::cout << "-b - divided_right = " << (-b - divided_right) << "\n";


		std::cout << "The solution1 is " << solution1 << "\n";
		std::cout << "The solution2 is " << solution2 << "\n";



	}

	
	return 0;
}
