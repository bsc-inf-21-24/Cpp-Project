#include <iostream>
#include <limits>

using namespace std;

double areaOfShapes(double side)
{
   double square = side * side;
   return square;
}

double areaOfShapes(double length, double width)
{
    double rectangle = length * width;
    return rectangle;
}

double area(float height, float width)
{
    double triangle = 0.5* height * width;
    return triangle;
}

int main()
{
    do
    {       
        int input;
        cout << "Please select the area of the shape to calculate"<<endl;
        cout << "1. square \n 2. Rectangle \n 3. triangle \n 4. Quit Program \n"<< endl;
        cout << "Enter selection: ";
                            cout << ""<< endl;
        cin >> input;

        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "You entered invalid input!!!! \n Please enter a valid input!!!"<<endl;
            cout << " "<<endl;
        }
        else{
            if(input == 1)
            {
                int value;
                cout << "You have selected Square!"<<endl;
                cout << "Enter the value of side of Square"<<endl;
                cin >> value;

                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "please enter a valid input!!!"<<endl;

                }
                else
                {
                    cout << "The Area of the Square is: "<< areaOfShapes( value)<<endl;
                                        cout << " "<< endl;
                }
            }
            else if(input==2 )
            {
                int length,width;
                cout << "You have selected Rectangle!"<<endl;
                cout << "Enter the value of length and the width"<<endl;
                cin >> length>>width;

                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "please enter a valid input!!!"<<endl;
                                        cout <<""<< endl;

                }
                else
                {
                    cout << "The Area of the Square is: "<< areaOfShapes( length, width)<<endl;
                                        cout <<""<< endl;
                }
            }
            else if(input == 3)
            {
                int heigt,width;
                cout << "You have selected Triangle!"<<endl;
                cout << "Enter the values of sides of triangle"<<endl;
                cin >> heigt>>width;

                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "please enter a valid input!!!"<<endl;
                                        cout <<""<< endl;
                }
                else
                {
                    cout << "The Area of the Triangle is: "<< area(heigt,width)<<endl;
                    cout <<" "<< endl;
                }
            }
            else if(input == 4)
            {
                break;
            }
            else
            {
                cout << "Your input was:"<<input<<" which is an invalid input \n Please enter a valid input!!!!"<<endl;
                cout << " " <<endl;
            }
        }

    } while (true);
    
        cout << " Thank you for using the Program!!"<<endl;

}
