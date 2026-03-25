#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main () {
 string data;
 // open a text file in write mode.
 ofstream outfile;

 outfile.open("afile.txt", ios::app);

 cout << "Writing to the file" << endl;
 cout << "Enter your name: ";

 getline(cin, data);
 // write inputted data into the text file.
 outfile << data << endl;


 cout << "Enter your age: ";
 getline(cin, data);
 //cin.ignore();
 
 // again write inputted data into the text file.
 outfile << data << endl;
 // close the opened file.
 outfile.close();
 // open a text file in read mode.
 ifstream infile;
 infile.open("afile.txt");
 cout << "Reading from the file" << endl;
 getline(infile, data);
 // write the data at the screen.
 cout << data << endl;
 
 // again read the data from the file and display it.
 getline(infile, data, '\n');
 cout << data << endl;
 // close the opened file.
 infile.close();
 return 0;
}