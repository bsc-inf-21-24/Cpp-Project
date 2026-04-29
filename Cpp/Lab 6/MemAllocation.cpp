#include <iostream>
using namespace std;

int main()
{

    int numberOfElements = 0;
    int* dynamicArray = nullptr;

    cout << "How many numbers would you like to type?";
    cin >> numberOfElements;

    dynamicArray = new int[numberOfElements];

    if(dynamicArray == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        return 1; // Exit with an error code
    }
    else
    {
        for(int i= 0; i < numberOfElements; i++)
        {
            cout << "Enter number " << (i + 1) << ": ";
            cin >> dynamicArray[i];
        }

        cout << "You entered: ";

        for(int i = 0; i < numberOfElements; i++)
        {
            cout << dynamicArray[i] << " ";
        }
        delete[] dynamicArray; // Free the allocated memory
        dynamicArray = nullptr; // Avoid dangling pointer   
    }

    return 0;
}