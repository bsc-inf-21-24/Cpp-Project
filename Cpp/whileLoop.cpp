#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Enter an interger value between 5 and 10"<< endl;
    cin >>value;
    while(!(value > 5 && value < 10))
    {
        cout << "Sorry, you entered an invalid number, please try again" << endl;
        cout << "you entered "<< value << ".Please enter a number between 5 and 10"<<endl;
        cin >>  value;
    }
    cout << "Your input value("<<value<<") has been accepted"<< endl;

    return 0;
}