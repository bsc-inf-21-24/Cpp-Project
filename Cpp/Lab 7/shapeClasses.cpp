#include <iostream>
#include "shape.h"

using namespace std;
using namespace shapes;

int main()
{
    do
    {
        int option;
        cout << "Choose a shape to Calculate its Area:\n"
             << "1. Calculate the area of a squere\n"
             << "2. Calculate the area of a triangle\n"
             << "3. Calculate the area of a circle\n"
             << "4. Quit" << endl;

        cin >> option;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "The input must be an integer 1-4" << endl;
            cout << "-------------------------------------" << endl;
        }
        else if (option < 1 || option > 4)
        {
            cout << "Invalid input must be 1 - 4" << endl;
            cout << "-------------------------------------" << endl;
        }
        else if (option == 1)
        {
            float side;
            cout << "Enter the side length of the squere: ";
            cin >> side;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input" << endl;
            }
            else
            {
                squere s;
                s.getValue(side);
                cout << "Area: " << Area::areaOfSquere(s) << endl;
            }
        }
        else if (option == 2)
        {
            float base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input" << endl;
            }
            else
            {
                triangle t;
                t.getValue(base, height);
                cout << "Area: " << Area::areaOfTriangle(t) << endl;
            }
        }
        else if (option == 3)
        {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input" << endl;
            }
            else
            {
                circle c;
                c.getValue(radius);
                cout << "Area: " << Area::areaOfCircle(c) << endl;
            }
        }
        else
        {
            break;
        }

    } while (true);

    return 0;
}