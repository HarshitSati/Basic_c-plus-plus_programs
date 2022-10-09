#include <iostream>
using namespace std;

int main()
{

    int n, reversed_number = 0, remainder;

    cout << "Enter an integer which you want to reverse: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "The Reversed Number is " << reversed_number;

    return 0;
}