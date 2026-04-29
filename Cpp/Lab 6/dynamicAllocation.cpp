#include <iostream>
#include <string>
using namespace std;

int main()
{
    int intValue;
    string stringValue;

    cout << "Enter an int Value: ";
    cin >> intValue;

    cout << "Enter a string value: ";
    cin >> stringValue;

    // Dynamic allocate and store values
    int* dynamicInt = new int(intValue);
    string* dynamicString = new string(stringValue);

    cout << "The value of the int is: " << *dynamicInt << endl;
    cout << "The value of the string is: " << *dynamicString << endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}