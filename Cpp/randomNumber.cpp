#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the RNG once at the start of the program so rand() returns different values each run.
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a number between 0 and 12 (inclusive)
    int dayUntilExpiration = rand() % 12;

    /*if (dayUntilExpiration == 10)
    {
        cout << "Your subscription will expire soon. Renew now" << endl;
    }
    else if(dayUntilExpiration >= 2)
    {
        cout << "Your subscription expires in " << dayUntilExpiration << ". Renew now and save 10%!" << endl;
    }
    else if (dayUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
    }
    else if (dayUntilExpiration == 0)
    {
        cout << "Your subscription has expired." << endl;
    }
    else
    {
        cout << "You have an active subscription." << endl;
    }
        */
    switch (dayUntilExpiration)
    {
        case 0: 
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
            break;
        case 2: 
        case 3: 
        case 4:
        case 5: cout << "Your subscription expires in " << dayUntilExpiration << ". Renew now and save 10%!" << endl;
            break;
        case 6: 
        case 7: 
        case 8: 
        case 9: 
        case 10: cout << "Your subscription will expire soon. Renew now" << endl;
            break;
        default: cout << "You have an active subscription." << endl;
            break;  

    }
}
