/*
out_of_range is not a runtime_error, so catching runtime_errordoes not deal with the out_of_rangeerrors that 
we might get from misuse of vectorsand other standard-library container typesHowever, both out_of_range and
runtime_error are ¡°exceptions,¡± so we can catch exceptionto deal with both:

*/


#include "PPP.h"






int main()
{
	
		
		double d = 0;
		cin >> d;

		if (cin)
		{
			cout << "all is well, and we can try reading againg.\n";
		}
		else
		{
			cerr << "the last read didn't succeed, so we take some other action.\n";
		}



	return 0;
}