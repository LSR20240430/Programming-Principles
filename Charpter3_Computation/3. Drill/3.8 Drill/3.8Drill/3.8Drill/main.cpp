/*Reject values without units or with ¡°illegal¡± representations of units, such as y, yard, meter, km, and gallons

*/

import std;

int main()
{
	double input_value = 0.0, input_min = 0.0, input_max = 0.0;
	bool is_one = true,  unit_ok = true;
	std::string unit;

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