#include <iostream>

// for std::find
#include <algorithm>

int choices();

int main() 
{

    int x;
    int validChoices[] = { 1,2,3,4 };

    while (true)
    {

        x = choices();

        if (std::find(std::begin(validChoices), std::end(validChoices), x) != std::end(validChoices))
        {
            std::cout << "You typed: " << x << std::endl;

            // clear any error flags
            std::cin.clear();

        }
        else
        {
            std::cout << "Please input number between 1 and 4.";
            return 0;
        }

    }

}

// Ask for inputs
int choices()
{
    int choice;
    std::cout << "Enter a number between 1 and 4: ";
    std::cin >> choice;
    return choice;
}
