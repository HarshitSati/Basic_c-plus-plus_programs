#include <iostream>
using namespace std;

int main()
{
    string str1, str2, newstr;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "\n Enter the second string: ";
    getline(cin, str2);
    newstr = str1 + str2;
    cout << "\n The concatenated string is: " << newstr;
    return 0;
}