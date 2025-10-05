import std;

int main()
{
	std::string first_name,friend_name;

	int age = 0, error = 0;


	std::cout << "Please enter your friend's first name, his or her friend name, and age: ";
	
	std::cin >> first_name >> friend_name >> age;
	if (age <= 0 || age >= 110)
	{
		std::cout << "you're kidding!";
		error = 1;

		std::cout << "Please enter age again";

		while (error)
		{
			
			std::cin >> age;

			if (age <= 0 || age >= 110)
			{
				std::cout << "you're kidding!" << "Please enter age again ";
				error = 1;
			}

			else
				error = 0;

			}

		}
		
	



	std::cout << "Dear " << first_name << ","<< "\n  How are you? I am fine. I miss you" << "The entire time from Paris to Tokyo, I have been missing those happy days and nights that I spent with you with you day and night. I would really like to invite you to Tokyo to see the cherry blossoms";

	std::cout << "Have you senn " << friend_name << " lately?";


	std::cout << "I hear you just had a birthday and you are " << age << " years old.";

	if (age < 12)
		std::cout << "Next year you will be age + 1";

	if (age == 17)
		std::cout << "Next year you will be age to vote";

	if (age > 70)
		std::cout << "are you retired";

	std::cout << "\nYours sincerely,\n\n" << "Liu Shu Rong";

	return 0;
}