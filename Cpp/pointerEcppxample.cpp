#include <iostream>
using namespace std;

int main()
{
    int intvariable = 20;

    double doubleVariable = 9.0;

    //Pointer to an integer
    int *pIntPointer = &intvariable;

    //Pointer to a double
    double *pDoublePointer = &doubleVariable;

    cout << "pIntPointer Before: " << pIntPointer<< endl;
    cout << "pDoublePointer Before" << pDoublePointer << endl;

    cout << endl;

    //inclement pointers by 1
    pIntPointer = pIntPointer + 1;
    pDoublePointer = pDoublePointer + 1;

    