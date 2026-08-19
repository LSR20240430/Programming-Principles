/*
Following the advice of checking preconditions soon leads to a couple of problems:
Some preconditions cannot be checked simply and cheaply. For those, stay with the comments and check only 
what can be checked simply and cheaply.
We can¡¯t see whether an if-statement checks an invariant or is part of the ordinary logic of the function.
To deal with the second problem, we introduce a function called expectto do the checking. As arguments 
expect()takes a function to test and a string used to report errors:

*/

#include "PPP.h"



/*
* @note:the arguments are positive and a < b < c
* 
*/

void my_complicated_function(int a, int b, int c)
{
	expect([&] { return 0 < a && a < b && b < c; }, "bad arguments for mcf");
	//[&]{ return 0<a && a<b && b<c; }is called a lambda expression and will be explained in ¡ì21.2.3

}


int main()
{

	try {
		my_complicated_function(4, 3, 6);

	}
	catch (exception& e)
	{
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

