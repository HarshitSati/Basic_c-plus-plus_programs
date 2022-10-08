#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float number, root;
    cout << "Enter a number: ";
    cin >> number;
    root = sqrt(number);
    cout << "Square root of " << number << " is " << root;
    return 0;
}