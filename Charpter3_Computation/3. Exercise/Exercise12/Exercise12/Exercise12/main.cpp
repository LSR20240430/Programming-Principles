/*
Create a program to find all the prime numbers between 1 and 100. There is a classic method for doing this, called the 
¡°Sieve of Eratosthenes.¡± If you don¡¯t know that method, get on the Web and look it up. Write your program using this method.

*/

import std;
void Sieve_of_Eratosthenes( );

int main()
{

	Sieve_of_Eratosthenes();

	return 0;
}

void Sieve_of_Eratosthenes( )
{
	std::vector<bool> numbers(101, true); // avoid vector out of range
	std::vector<int> prime_condition;
	

	numbers[0] = numbers[1] = false;

	// verify the number between 2 and 10 if it is prime, if it is prime, number[i] = true, isn't, number[i] = false. So if the max value we want it is n, then vector'size is n + 1;
	for (int i = 2; i <= 10;++i)
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
			
			for (int multiply = 2; i * multiply <= 100; ++multiply)
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
	for (int i = 2; i <= 100; ++i)
	{
		if (numbers[i])  // Please remember we just controlled numbers[i] , so if we want not to error, we had better use numbers[i] when we out put;
			std::cout << "prime is " << i << "\n";
	}

}