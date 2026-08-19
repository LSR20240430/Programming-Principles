/*
Read (day-of-the-week,value) pairs from standard input. For example:
Click here to view code image
Tuesday 23 Friday 56 Tuesday −3 Thursday 99
Collect all the values for each day of the week in a vector<int>. Write out the values of the seven 
day-of-the-week vectors. Print out the sum of the values in each vector. Ignore illegal days of the week, 
such as Funday, but accept common synonyms such as Monand monday. Write out the number of rejected values.

*/


#include "PPP.h"

int sum(vector<int> collect_day_of_week);

/*
* @brief: A function get(day-of-the-week,value) pairs from standard input and store is in vector<pair>, then return vector<pair>.
* 
*/
vector <pair<string,int>> get_day_and_values()
{
	
	cout << "----------\n" << "Start get (day-of-the-week,value) pairs,day first followed by its value.\n";
	cout << "------------\n\n";
	
	vector<pair<string, int>>  get_day_and_values;

	for (pair<string, int> get_day_and_value; cin >> get_day_and_value.first >> get_day_and_value.second;)
		get_day_and_values.push_back({ get_day_and_value.first, get_day_and_value.second });

	if (cin.fail())
	{
		cin.clear();

		//// clear buffer of input so that cin() function can affect in the next loop. 
		//string temp;
		//cin >> temp;
	}
		
	return get_day_and_values;

}

/*
* @brief: collect values for each day of week and rejected day, then print them.
* @parameter get_day_and_values: the pair(string,value) that user input
*/
void collect_values_for_each_week(vector<pair<string, int>>  get_day_and_values)
{
	vector<int> collect_Monday;
	vector<int> collect_Tuesday;
	vector<int> collect_Wednesday;
	vector<int> collect_Thursday;
	vector<int> collect_Friday;
	vector<int> collect_Saturday;
	vector<int> collect_Sunday;
	vector<int> reject_values;

	int sum_values = 0;

	for (int i = 0; i < get_day_and_values.size();++i)
	{
		if (get_day_and_values[i].first == "Monday")
		{
			collect_Monday.push_back(get_day_and_values[i].second);

		}
		else if (get_day_and_values[i].first == "Tuesday")
		{
			collect_Tuesday.push_back(get_day_and_values[i].second);
		}
		else if(get_day_and_values[i].first == "Wednesday")
		{
			collect_Wednesday.push_back(get_day_and_values[i].second);
		
		}
		else if (get_day_and_values[i].first == "Thursday")
		{
			collect_Thursday.push_back(get_day_and_values[i].second);

		}
		else if (get_day_and_values[i].first == "Friday")
		{
			collect_Friday.push_back(get_day_and_values[i].second);

		}
		else if (get_day_and_values[i].first == "Saturday")
		{
			collect_Saturday.push_back(get_day_and_values[i].second);

		}
		else if (get_day_and_values[i].first == "Sunday")
		{
			collect_Sunday.push_back(get_day_and_values[i].second);

		}
		else
		{	
			reject_values.push_back(get_day_and_values[i].second);
		}

	}

	cout << "----------\n" << "Start calculate value of sum for each day of week.\n";
	cout << "------------\n\n";

	sum_values =  sum(collect_Monday);
	cout << "Monday's value of sum is " << sum_values << "\n";

	sum_values =  sum(collect_Tuesday);
	cout << "Tuesday's value of sum is " << sum_values << "\n";

	sum_values =  sum(collect_Wednesday);
	cout << "Wednesday's value of sum is " << sum_values << "\n";

	sum_values =  sum(collect_Thursday);
	cout << "Thursday's value of sum is " << sum_values << "\n";

	sum_values =  sum(collect_Friday);
	cout << "Friday's value of sum is " << sum_values << "\n";

	sum_values =  sum(collect_Saturday);
	cout << "Saturday's value of sum is " << sum_values << "\n";

	sum_values =  sum(collect_Sunday);
	cout << "Sunday's value of sum is " << sum_values << "\n";
	
	cout << "----------\n" << "Start calculate value of sum for rejected day.\n";
	cout << "------------\n\n";

	sum_values = sum(reject_values);
	cout << "rejected value of sum is " << sum_values << "\n";
}

/*
* @brief: calculate the sum of value for each day of week and return it's sum.
* @parameter collect_day_of_week: values of vector for each day of week.
*/
int sum(vector<int> collect_day_of_week)
{
	int sum = 0;

	for (int i = 0; i < collect_day_of_week.size(); ++i)
		sum += collect_day_of_week[i];

	return sum;


}


int main()
{
	vector <pair<string, int>> get_day_and_value = get_day_and_values();

	collect_values_for_each_week(get_day_and_value);


	return 0;
}