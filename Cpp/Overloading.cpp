#include <iostream>
using namespace std;

int add(int value1, int value2)
{
    int result = value1 + value2;
    return result;
}

double add(double value1, double value2)
{
    double result = value1 * value2;
    return result;
}

int main()
{
    int value1 =5.5;
    int value2 = 2.5;

    //cout << "Enter two numbers that we can use to perform calculations" << endl;
   // cin >> value1 >> value2;

    cout << "The result after calculation is: " << add(value1, value2) << endl;
}