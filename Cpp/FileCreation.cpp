#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile.close();
    return 0;
}