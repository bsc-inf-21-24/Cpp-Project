#pragma once
#include <string>
using namespace std;

class Person
{
    public:
        Person();
        Person(string name, float newWeight, int newAge);

        ~Person();
        //Overload the add operator
        float operator+(const Person& otherPerson);
        bool operator==(const Person& otherPersonName);
        bool operator!=(const Person& otherPersonName);
        bool operator>(const Person& newAge);
        bool operator<(const Person& newAge);
        operator int();
        operator string();
        operator float();
    private:
        float mWeight;
        string mFirstName;
        int mAge;
};
