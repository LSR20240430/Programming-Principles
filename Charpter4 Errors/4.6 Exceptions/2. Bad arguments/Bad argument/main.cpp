/*
Here is a version of area()using exceptions. try - catch blocks and throw statement. note how the handling 
of the error is cleanly separated from the detection of the error: main()knows nothing about which function 
did a throw Bad_area{}, and area()knows nothing about which function (if any) cares 
to catchthe Bad_area exceptions it throws. This separation is especially important in large programs 
written using many libraries. 

*/

#include "PPP.h"



/*
* @brief: User-defined types (classes and enumeration)  Bad_areais a new type we define with no other purpose 
than to provide something unique to throwfrom area()so that some catchcan recognize it as the kind 
of exception thrown by area()
*/
class Bad_area{};



/*
* @brief: calculate the area of rectangle
* @parameter1 length: the length of rectangle
* @parameter2 width: the width of rectangle
* @note: agguments should be greater than 0
*/
int area(int length, int width)
{
	if (length <= 0 || width <= 0)
		throw Bad_area{};    // Bad_area{} means Make an object of type Bad_areawith the default value
	//throw Bad_area{}means ¡°Make an object of type Bad_areaand throw it.¡±  ¡ª¡ª detect


	return length * width;
}



/*
* @brief: calculate the framed area of rectangle
* @parameter1 x: the length of framed rectangle
* @parameter2 y: the width of framed rectangle
* @note: x and y should be greater than 2
*/
int framed_area(int x, int y)
{
	constexpr int frame_width = 2;


	return area(x - frame_width, y - frame_width);
}


/*
* @brief£ºaim to test function of area and framed_area
* @parameter1 x: should be greater than 0
* @parameter2 y: should be greater than 2
* @parameter3 z: should be greater than 2
*/
void test(int x, int y, int z)
{
	int area1 = area(x, y);
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	
	double ratio = double(area1) / area3;
	


}




int main()
{
	// error handling
	try {
		test(-1, 2, 4);
	}
	catch(Bad_area)
	{
		cout << "Oops! bad arguments to area()\n";
	}


	return 0;
}

