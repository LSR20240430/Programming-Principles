/*
Try to calculate the number of rice grains that the inventor asked for in exercise 9 above. You¡¯ll find that the number is so large
that it won¡¯t fit in an int or a double. Observe what happens when the number gets too large to represent exactly as an int and as a
double. What is the largest number of squares for which you can calculate the exact number of grains (using an int)? What is the
largest number of squares for which you can calculate the approximate number of grains (using a double)?


*/
// reply: int :30


import std;

int main()
{

	double sum = 1;
	double square = 1;

	std::cout << "Please calculate how many squares are required to give the inventor at least 1000 grains of rice, 1,000,000, and 1,000,000,000 \n";

	// the loop starts from square 2
	for (int i = 2;true;++i)
	{
		square *= 2;
		sum += square;

		if (sum >= 1000 && sum < 1000000)
		{
			std::cout << "you arrived 1000 grains of rice, the square is " << i << " suare value is " << square << " sum is " << sum << "\n";
		}
		else if (sum >= 1000000 && sum < 1000000000)
			std::cout << "you arrived 1000000 grains of rice, the square is " << i << " suare value is " << square << " sum is " << sum << "\n";
		else if (sum >= 1000000000)
		{
			std::cout << "you arrived 1000000000 grains of rice, the square is " << i << " suare value is " << square << " sum is " << sum << "\n";

		}


	}







	return 0;
}