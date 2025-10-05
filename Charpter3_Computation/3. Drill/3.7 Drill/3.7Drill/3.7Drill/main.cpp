/*Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. Accept the four units: 
cm, m, in, ft. Assume conversion factors 1m==100cm, 1in==2.54cm, 1ft==12in. Read the unit indicator into a string. 
You may consider 12 m(with a space between the number and the unit) equivalent to 12m(without a space).

*/

import std;

int main()
{
	double input_value = 0.0, input_min = 0.0, input_max = 0.0;
	bool is_one = true;
	std::string unit;

	std::cout << "Please enter the double value followed by its unit(cm m in ft)";


	while (std::cin >> input_value >> unit)
	{
		if (unit == "m")
		{
			input_value = input_value;
		}
		else if (unit == "cm")
		{
			input_value *= 0.01;
		}
		else if (unit == "in")
		{
			input_value *= 2.54 * 0.01;
		}

		else if (unit == "ft")
		{
			input_value *= 12 * 2.54 * 0.01;
		}
	

		if (is_one)
		{
			is_one = false;
			input_max = input_value;
			input_min = input_value;
			std::cout << "both smallest and largest so far: " << input_value <<"m"<<"\n";
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



	return 0;
}