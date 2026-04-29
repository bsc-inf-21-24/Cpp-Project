#include <iostream>
#include <string>
#include "student.h"

using namespace std;


    //Member function definition
    void Student::initialize()
    {
        mFirstName = "Thirtysix";
        mLastName = "Chitsime";
        mAge = 0;
        mWeight = 0.0f;

    }

    void Student::CalculateAge(int yearBorn, int currentYear)
    {
        mAge = currentYear - yearBorn;
    }

    int main()
    {
        Student student1;

        student1.initialize();
        student1.CalculateAge(2006, 2026);

        cout << "Student's first name: " << student1.mFirstName << endl;
        cout << "Student's last name: " << student1.mLastName << endl;
        cout << "Student's weight: " << student1.mWeight << endl;
        cout << "Student's age after calculation: " << student1.mAge << endl;

        return 0;
}