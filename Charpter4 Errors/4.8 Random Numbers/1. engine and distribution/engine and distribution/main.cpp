/*
engine: We start by generating a series of random values. That¡¯s done by an engine.

To be useful, the random numbers from the engine must be transformed into the distribution we require, such as
integers in the [1:6] range to model a die (a dice): 
If all values in the range appear at the same frequency when we throw the die many times. the distribution is 
called a uniform_int_distribution.

*/

#include "PPP.h"


int main()
{
	//the simplest engine
	default_random_engine engine;

	// the distribution we want
	uniform_int_distribution<int> dist(1, 6);

	
	
	for (int i = 0; i < 10;++i)
	{
		cout << engine() << "\n";
		
		cout << dist(engine) << " "<<"\n";
		// get a value from the distribution using the engine


	}

	cout << "\n";

	return 0;
}