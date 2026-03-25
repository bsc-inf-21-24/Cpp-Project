#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    // 1. Initialize counters to 0 (crucial, otherwise they contain random garbage)
    int wordCount = 0;
    int vowelCount = 0;

    ifstream myFile;
    myFile.open("afile.txt"); // Added the missing dot '.'

    if (!myFile) {
        cerr << "Could not open file!" << endl;
        return 1;
    }

    // 2. To use your logic, we should read the whole file into one string first
    // This makes the for loop and stringstream work perfectly
    stringstream buffer;
    buffer << myFile.rdbuf(); 
    string fileContent = buffer.str();

 /*  // string vowels = "AEIOUaeiou"; // String of vowels for easy checking
    // 3. Count letters using the string
    for(char c : fileContent)
    {
        char lowerC = tolower(c);
        if(lowerC == 'a'|| lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') // Check if it's a letter and  a vowel
        {
            letterCount++;
        }
    }
*/
        string vowels = "aeiouAEIOU";
        for (char c : fileContent)
        {
            // Check if the character is a letter (you can also check for uppercase letters if needed)
            // If the character is found anywhere inside the "vowels" string
            if (vowels.find(c) != string::npos) {
                vowelCount++;
            }
        }
    // 4. Count words using the stringstream
    stringstream ss(fileContent);
    string word;
    while(ss >> word)
    {
        wordCount++;
    }

    cout << "Number of words are: " << wordCount << endl;
    cout << "Number of letters are: " << vowelCount << endl;

    myFile.close();
    return 0;
}