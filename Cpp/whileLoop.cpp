#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int value;

    cout << "Enter an integer value between 5 and 10" << endl;

    while (true)
    {
        cin >> value;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input (not a number). Try again: " << endl;
        }
        else if (value < 5 || value > 10)
        {
            cout << "Sorry, you entered " << value 
                 << ". Please enter a number between 5 and 10: " << endl;
        }
        else
        {
            break; // valid input
        }
    }

    cout << "Your input value (" << value << ") has been accepted" << endl;

    return 0;
}