#include <iostream>
using namespace std;

main ()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = a / b;
    cout << "a / b = " << c << endl;

    c = a % b;
    cout << "a % b = " << c << endl;

    c = ++a;
    cout << "a++ = " << c << endl;

    c = a--;
    cout << "a-- = " << c << endl;
    c=a;
     cout << "a-- = " << c << endl;
    return 0;
}