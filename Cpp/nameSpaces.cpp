#include <iostream>
#include <string>

namespace Math
{
    std::string exampleVariable;

    void Helloworld();
}

int main()
{
    Math::exampleVariable = "hy am Thirtysix";


    Math::Helloworld();

    return 0;
}

void Math::Helloworld()
{
   cout <<exampleVariable<< " am pround to be a programmer" << endl;
}