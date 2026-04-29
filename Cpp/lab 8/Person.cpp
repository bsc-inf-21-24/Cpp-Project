#include "Person.h"

Person::Person()
{
    mAge = 0;
    mFirstName = "";
    mWeight = 0.0f;
}
Person::Person(string name, float newWeight, int newAge)
{
    mFirstName = name;
    mWeight = newWeight;
    mAge = newAge;
}

Person::~Person()
{
}

float Person::operator+(const Person& otherPerson)
{
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPersonName )
{
    return this->mFirstName == otherPersonName.mFirstName;
}

bool Person::operator !=(const Person& otherPersonName)
{
    return this->mFirstName != otherPersonName.mFirstName;
}

bool Person::operator<(const Person& newAge)
{
    return this->mAge < newAge.mAge;
}

bool Person::operator>(const Person& newAge)
{
    return this->mAge > newAge.mAge;
}
Person::operator int()
{
    return mAge;
}

Person::operator string()
{
    return mFirstName;
}

Person::operator float()
{
    return mWeight;
}