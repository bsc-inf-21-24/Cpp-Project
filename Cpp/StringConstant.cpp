#include <iostream>

using namespace std;    

int main()
{
    char greeting[]= "Hello, World!";
    

    greeting[6] = ' ';
    greeting[7] = '6';
    cout << sizeof(char) << endl;
    return 0;
}