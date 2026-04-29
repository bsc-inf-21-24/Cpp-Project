#include <iostream>
#include "Rectangle_.h"
#include "Triangle_.h"

using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;

    rect.setWidth(4,5);

    trgl.setWidth(4,5);
    Daughter theDaughter(1);
    Son theSon(2);

    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';

    return 0;
}