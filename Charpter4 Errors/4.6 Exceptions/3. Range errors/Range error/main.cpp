/*
a range error because the index (subscript) wasn¡¯t in the range required by the vector.out_of_range is not a 
runtime_error, so catching runtime_error does not deal with the out_of_range errors that 
we might get from misuse of vectors and other standard-library container typesHowever, both out_of_range and
runtime_error are ¡°exceptions,¡± so we can catch exceptionto deal with both:

*/

#include "PPP.h"


int main()
{
	try {
		vector<int> v;

		for (int x; cin >> x;)
			v.push_back(x);

		for (int i = 0; i <= v.size(); ++i)
		{
			cout << "v[" << i << "] == " << v[i] << "\n";

		}


	}
	
	catch (exception& e) // 
	{

		/*
		* @brief:Note that we used cerrrather than coutfor our error output: cerris exactly like coutexcept that 
		it is meant for error output. By default, both cerrand coutwrite to the screen, but cerrisn¡¯t 
		optimized so it is more resilient to errors, and on some operating systems it can be diverted to a 
		different target, such as a file. Using cerralso has the simple effect of documenting that what we 
		write relates to errors.
		
		*/
		cerr << "error: " << e.what() << "\n";
		return 1;


	}

	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		return 2;

	}



	return 0;
}