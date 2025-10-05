import std;

int main()
{
    std::string previous, current;
    
    int number_of_words = 0;

    std::cout << "please enter current:";

    while(std::cin >> current)
    {
        number_of_words += 1; // equal to number_of_words ++

        if (previous == current)
            std::cout << "word number£º" << number_of_words << "repeated: " << current <<"\n";

        previous = current;

    }

    return 0;

}