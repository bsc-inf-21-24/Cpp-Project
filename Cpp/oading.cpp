#include <iostream>
using namespace std;

main ()
{
    int a =0;
    int b = 20;
    int c;

    if(a && b) {
        cout << "Line 1 - Condition is true" << endl;
    }
    if(a || b) {
        cout << "Line 2 - Condition is true" << endl;
    }

    return 0;
}