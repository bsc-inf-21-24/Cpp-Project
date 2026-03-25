#include <iostream>
using namespace std;

int main ()
{
    while(true)
    {
        cout << "Please select the area of the shape you want to calculate" << endl;
        cout <<"1. Square \n 2. Rectangle \n 3. Triangle \n 4. Quit Program"<< endl;
        cout << "Enter Selection: ";
        int selection;
        cin >> selection;

        if(selection == 1)
        {
            cout << "You have selected Square. Please enter the length of the side of the square: "<< endl;
            double side;
            cin >> side;
            double area = side * side;
            cout << "The area of the square is: "<< area <<"\n"<< endl;
        }
        else if(selection == 2)
        {
            cout << "You have selected Rectangle. Please enter the length and width of the rectangle: "<< endl;
            double length, width;
            cin >> length >> width;
            double area = length * width;
            cout << "The area of the rectangle is: "<< area <<"\n"<< endl;
        }
        else if(selection == 3)
        {
            cout << "You have selected Triangle. Please enter the base and height of the triangle: "<< endl;
            double base, height;
            cin >> base >> height;
            double area = 0.5 * base * height;
            cout << "The area of the triangle is: "<< area <<"\n"<< endl;
        }
        else if(selection == 4)
        {
            cout << "Thank you for using the program. Goodbye!"<< endl;
            break;
        }
        else
        {
            cout << "Your input was: "<< selection << " which is an invalid input \n Please enter a valid input!!!\n"<< endl;
        }
    }
    return 0;
}