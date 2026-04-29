#pragma once
#include <string>

using namespace std;

class Student
{
    public:

            string mFirstName;
            string mLastName;
            unsigned int mAge;

            float mWeight;

            void initialize();
            void CalculateAge(int yearBorn, int currentYear);

};