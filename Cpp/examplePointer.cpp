#include <iostream>
using namespace std;

int main()
{
    int count = 5;
    int *pCount = &count;

    cout << "Value of count: " << count << endl;
    cout << "Value of pCount: " << *pCount << endl;
    cout << "Address of count: " << &count << endl;
    cout << "Address stored in pCount: " << pCount << endl; 
    return 0;
}