/*
 There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name his reward. 
 The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on, doubling for each of 
 the 64 squares. That may sound modest, but there wasn¡¯t that much rice in the empire! Write a program to calculate how many squares
 are required to give the inventor at least 1000 grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains. 
 You¡¯ll need a loop, of course, and probably an intto keep track of which square you are at, an intto keep the number of grains on 
 the current square, and an intto keep track of the grains on all previous squares. We suggest that you write out the value of all 
 your variables for each iteration of the loop so that you can see what¡¯s going on.


*/



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