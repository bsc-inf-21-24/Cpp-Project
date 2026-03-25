#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

// v. Implement a function called Reverse
string Reverse(string text) {
    reverse(text.begin(), text.end());
    return text;
}

int main() {
    // ii. Open text file and assign contents to string variable fileData
    string fileData;
    ifstream infile("afile.txt");
    if (infile.is_open()) {
        getline(infile, fileData);
        infile.close();
    }

    // iii. Calculate and output the number of vowels
    int vowelCount = 0;
    string vowels = "aeiouAEIOU";
    for (char c : fileData) {
        if (vowels.find(c) != string::npos) {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // iv. Calculate and output the number of words
    int wordCount = 0;
    stringstream ss(fileData);
    string tempWord;
    while (ss >> tempWord) {
        wordCount++;
    }
    cout << "Number of words: " << wordCount << endl;

    // v. Output the statement in reverse using the Reverse function
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    // vi. Capitalize the second letter of each word and output result
    stringstream ss2(fileData);
    string word;
    string capitalizedResult = "";

    while (ss2 >> word) {
        if (word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        capitalizedResult += word + " ";
    }
    
    // Remove trailing space
    if (!capitalizedResult.empty()) {
        capitalizedResult.pop_back();
    }

    cout << "Second letter capitalized: " << capitalizedResult << endl;

    return 0;
}