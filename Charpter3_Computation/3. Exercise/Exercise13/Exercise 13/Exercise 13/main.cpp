/*
Write a program that takes an input valuenand then finds the first nprimes.
*/

import std;
void Sieve_of_Eratosthenes();

int main()
{

	Sieve_of_Eratosthenes();

	return 0;
}

void Sieve_of_Eratosthenes()
{
	const int n = 10000; // I am a beginner, I just do some basic operation. That is, It mighe be error when the use_input is too larger, etc, 10000; 
	std::vector<bool> numbers(n + 1, true); // construct a vector to calculate which values is prime;   range: avoid vector out of range
	std::vector<int> prime_condition; // the condition of prime, if the first two values are one and itself, then it is value
	int user_input = 0;
	std::vector <int> primes; // store first n prime

	int primes_number = 0; // calculate how many primes you have already inputed.

	numbers[0] = numbers[1] = false; // o and 1 are not primme, so make it false;

	while (std::cin >> user_input)
	{

		// verify the number between 2 and 10 if it is prime, if it is prime, number[i] = true, isn't, number[i] = false. So if the max value we want it is n, then vector'size is n + 1;
		for (int i = 2; i <= std::sqrt(10000);++i)
		{
			for (int i_number = 1; i >= i_number; ++i_number)
			{
				switch (i % i_number)
				{
				case 0:
					prime_condition.push_back(i_number);
					break;

				default:
					break;
				}
			}

			if (prime_condition[0] == 1 && prime_condition[1] == i)
			{
				prime_condition.clear(); // clear elements

				for (int multiply = 2; i * multiply <= 10000; ++multiply)
				{

					numbers[i * multiply] = false;
				}

			}
			else
			{
				numbers[i] = false;
				prime_condition.clear(); // clear elements
			}

		}

		// Prevent output misalignment
		for (int i = 2; i <= 10000; ++i)
		{
			if (numbers[i])  // Please remember we just controlled numbers[i] , so if we want not to error, we had better use numbers[i] when we out put;
			{
				

				primes.push_back(i);
				if (user_input >= primes.size())
				{
					
					std::cout << "the " << primes_number + 1 << " prime is " << i << "\n";
					++primes_number;
				}

				else
				{
					primes_number = 0;
					primes.clear();
					break;
				}

			}
				
		}

	}

	

}