#include <iostream>

int choices();

int main() 
{

    int x;

    while (true)
    {

        x = choices();

        if (x == 1 || x == 2 || x == 3 || x == 4)
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
