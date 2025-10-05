/*Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered. 
When the loop ends, print the smallest, the largest, the number of values, and the sum of values. Note that to keep 
the sum, you have to decide on a unit to use for that sum; use meters.
*/

import std;

int main()
{
	double input_value = 0.0, input_min = 0.0, input_max = 0.0, sum = 0.0;
	bool is_one = true, unit_ok = true;
	std::string unit;
	int number_you_input = 0;

	std::cout << "Please enter the double value followed by its unit(cm m in ft): ";


	while (std::cin >> input_value >> unit)
	{
		if (unit == "m")
		{
			unit_ok = true;
			input_value = input_value;
		}
		else if (unit == "cm")
		{
			unit_ok = true;
			input_value *= 0.01;
		}
		else if (unit == "in")
		{
			unit_ok = true;
			input_value *= 2.54 * 0.01;
		}

		else if (unit == "ft")
		{
			unit_ok = true;
			input_value *= 12 * 2.54 * 0.01;
		}
		else
		{
			unit_ok = false;
			std::cout << "You didn't enter unit or entered a illgegal value I don't know\n";
		}

		


		if (unit_ok)
		{
			sum += input_value;
			std::cout << "The sum is: " << sum << "meters\n";

			++number_you_input;
			std::cout << "The number of values: " << number_you_input << "\n";


			if (is_one)
			{
				is_one = false;
				input_max = input_value;
				input_min = input_value;
				std::cout << "both smallest and largest so far: " << input_value << "m" << "\n";
			}
			else
			{
				if (input_value > input_max)
				{
					input_max = input_value;
					std::cout << "the largest so farater the number: " << input_max << "m" << "\n";

				}
				else if (input_value < input_min)
				{
					input_min = input_value;
					std::cout << "the smallest so farater the number: " << input_min << "m" << "\n";

				}
			}


		}



	}



	return 0;
}