/*
Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function that will check if a 
number is prime (i.e., see if the number can be divided by a prime number smaller than itself) using a vector of primes in order 
(so that if the vectoris called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop that goes from 1 to 100, 
checks each number to see if it is a prime, and stores each prime found in a vector. Write another loop that lists the primes you 
found. You might check your result by comparing your vector of prime numbers with primes. Consider 2 the first prime.



*/

import std;

void find_primes();

int main()
{
	
	
	
	
	find_primes();


	return 0;
}

void find_primes()
{

	std::vector<int> primes;
	std::vector <int> numbers;
	std::vector <int> number_divides;
	int i = 0, i_number = 1;
	std::cout << "Let me help you find all primes between 1 and 100.\n\n";

	while (i_number <= 100)
	{
		numbers.push_back(i_number);
		++i_number;

	}


	for (i = 2; i <= 100; ++i)
	{
		for (int number : numbers)
		{
			if (i >= number)
			{
				switch (i % number )
				{
				case 0:
					number_divides.push_back(number);				
					break;
				
				default:
					break;
				}

			}

		}
		
		if (number_divides[0] == 1 && number_divides[1] == i)
		{
			std::cout << "prime is " << i << "\n";
			primes.push_back(i);

		}
		number_divides.clear();

	}




}