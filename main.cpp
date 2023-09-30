#include <iostream>
#include <limits>

int choices();

using namespace std;

int main() 
{

    int x;

    while (true)
    {

        x = choices();

        switch (x)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "You Typed: " << x << endl;
            cin.clear();
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;

            // clear any error flags
            cin.clear();

            // discard unwanted input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }
    }
}

// Ask for inputs
int choices()
{
    int choice;
    cout << "Enter a number between 1 and 4: ";
    cin >> choice;
    return choice;
}
