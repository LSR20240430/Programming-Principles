/*Now change the body of the loop so that it reads just one double each time around. Define two variables to keep 
track of which is the smallest and which is the largest value you have seen so far. Each time through the loop write out 
the value entered. If it¡¯s the smallest so far, write the smallest so farafter the number. If it is the largest so far, 
write the largest so farafter the number.
*/

import std;

int main()
{
	double input_value = 0.0, input_min = 0.0, input_max = 0.0;
	bool is_one = true;

	while ( std::cin >> input_value)
	{

		if (is_one)
		{
			is_one = false;
			input_max = input_value;
			input_min = input_value;
			std::cout << "both smallest and largest so far: " << input_value << "\n";
		}
		else 
		{
			if (input_value > input_max)
			{
				input_max = input_value;
				std::cout << "the largest so farater the number: " << input_max <<"\n";

			}
			else if (input_value < input_min)
			{
				input_min = input_value;
				std::cout << "the smallest so farater the number: " << input_min <<"\n";

			}	
		}
		

	}



	return 0;
}