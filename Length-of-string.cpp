#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter The string: ";
    cin >> str;
    int count = 0;
    for (int i = 0; str[i]; i++)
        count++;
    cout << count;
}