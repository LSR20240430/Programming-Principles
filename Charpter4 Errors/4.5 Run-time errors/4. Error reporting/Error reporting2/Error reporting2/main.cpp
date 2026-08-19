/*
This approach seems like it could work, but it has a couple of problems that make it unusable in many cases:
①Now both the called function and all callers must test. The caller has only a simple test to do but must 
still write that test and decide what to do if it fails.
②A caller can forget to test. That can lead to unpredictable behavior further along in the program.
③Many functions do not have an “extra” return value that they can use to indicate an error. For example, 
a function that reads an integer from input (such as cin’s operator >>) can obviously return any intvalue, 
so there is no intthat it could return to indicate failure.

The second case above – a caller forgetting to test – can easily lead to surprises. For example:
int f(int x, int y, int z){int area1 = area(x,y);if (area1<=0)error("non−positive area");
int area2 = framed_area(1,z);int area3 = framed_area(y,z);double ratio = double(area1)/area3;//}
Do you see the errors? This kind of error is hard to find because there is no obvious “wrong code” to 
look at: the error is the absence of a test.

Try This
Test this program with a variety of values. Print out the values of area1, area2, area3, and ratio. 
Insert more tests until all errors are caught. How do you know that you caught all errors? This is not a 
trick question. In this particular example, you can give a valid argument for having caught all errors.


*/

#include "PPP.h"

/*
* @brief: calculate the area of rectangle
* @parameter1 length: the length of rectangle
* @parameter2 width: the width of rectangle
* @note: agguments should be greater than 0
*/
int area(int length, int width)
{
	if (length <= 0)
		return -1; // the called function test —— detect

	if (width <= 0)
		return -1;

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
* @brief：aim to test function of area and framed_area
* @parameter1 x: should be greater than 0
* @parameter2 y: should be greater than 2
* @parameter3 z: should be greater than 2

*/
void test(int x, int y, int z)
{
	int area1 = area(x, y);
	cout << "area1 is " << area1 << "\n"; 
	if (area1 <= 0) // error handling
	{
	
		error("non−positive area");
		
		// the caller function test
	}
	int area2 = framed_area(1, z);
	cout << "area2 is " << area2 << "\n";
	if (area2 <= 0)
	{
		error("non−positive area");

	}
	int area3 = framed_area(y, z);
	cout << "area3 is " << area3 << "\n";
	if (area3 <= 0)
	{
		error("non−positive area");

	}
	double ratio = double(area1) / area3;
	cout << "ratio is " << ratio << "\n";

	


}

int main()
{
	test(-1, 2, 3); // area1 will be get negative (due to -1), area3 will be get zero (due to 2)


	return 0;
}