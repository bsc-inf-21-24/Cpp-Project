#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main()
{
    Person Jane = Person("Jane", 60.0f,12);
    Person John = Person("John", 75.0f,15);

    float totalWeight = Jane + John;

     cout << "Total weight: " << totalWeight << endl;
    if(Jane == John)
    {
        cout << "This is the same person" << endl;
    }
    
    if(Jane != John)
        {
            cout << "This is NOT the same person" << endl;
        }
        
    if(Jane < John)
    {
        cout << "Jane is younger than John" << endl;
    }

    if(Jane > John)
    {
        cout << "John is older than Jane" << endl;
    }

    string JaneName = Jane;
    cout << "Jane's name: " << JaneName << endl;        

    float JaneWeight = Jane;
    cout << "Jane's weight: " << JaneWeight << endl;    
    
    int JaneAge = Jane;
    cout << "Jane's age: " << JaneAge << endl; 


    return 0;
}