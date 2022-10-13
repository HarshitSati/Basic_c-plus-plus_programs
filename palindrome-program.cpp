#include <iostream>

using namespace std;

int main()

{

    int num, rem;
    cout << "Enter a number: ";

    cin >> num;

    int duplicatenum = num;

    int newnum = 0;

    while (num != 0)

    {

        rem = num % 10;

        newnum = newnum * 10 + rem;

        num = num / 10;
    }

    if (newnum == duplicatenum)

        cout << "This is a palindrome";

    else

        cout << "This is not a palindrome";

    return 0;
}