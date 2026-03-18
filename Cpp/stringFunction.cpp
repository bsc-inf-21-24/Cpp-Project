#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[20] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;


    // Copy str1 to str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1) : " << str3 << endl;
        
    //concatenates str1 and str2
    strcat( str1, str2);
    cout << "strcat( str1, str2) :" << str1 <<endl;

    // Total length of str1 after concatenation
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
    cout << "the size of str1 is:  " << sizeof(str1) << endl;
    return 0;   
}