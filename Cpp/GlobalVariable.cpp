#include <iostream>
using namespace std;

//global variable declaration
int g = 30;

int main()
{
    // Local variable declaration
    int a , b;
    //actual initialization
    a = 40;
    b = 20;
   int g = a + b;
    
    cout << g;

    return 0;
}

