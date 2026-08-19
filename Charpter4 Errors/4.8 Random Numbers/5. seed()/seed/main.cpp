/*
A random number generator delivers the same sequence every time it is created and used. That¡¯s very useful for 
debugging and testing where we want repeatable results, but undesirable when we want unpredictable outputs. 
For example, in a game, we don¡¯t want the monster to always be a troll who attacks in the same place, same 
time, and in the same way every time we play.
To get different sequences from an engine, we seed

*/

#include "PPP.h"

int main()
{
	//the simplest engine
	default_random_engine engine; // Buying a dice = default_random_engine engine; (preparation)

	cout << engine() << "\n"; // First number   Rolling the dice = engine() (actual number generation)
	cout << engine() << "\n"; // Second number (next in sequence)

	
	engine.seed(7000);
	// engine() means generate random number
	cout << engine() << "\n";

	// use 8000 instead of the default starting value
	default_random_engine engine1(8000);  
	cout << engine1() << "\n"; 

	// start a new sequence from 9876
	engine1.seed(8000);
	cout << engine1() << "\n";
		
	

	cout << "\n";

	return 0;
}