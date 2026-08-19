/*
The program is mainly used for knowing Random Numbers and PPP.h.
Typically, we want to choose the engine and distribution in one place and then just use them through a simple 
interface. We have done so in PPP_supportby providing a couple of access functions

*/

#include "PPP.h"


int main()
{

	
	for (int i = 0; i < 10;++i)
	{
		//get an int from the range [min:max]
		cout << random_int(1, 6) << ' ';

	}

	cout << "\n\n";

	return 0;
}