#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number, ans;
    cout << "Enter a number to find the cube root: ";
    cin >> number;
    ans = cbrt(number);
    cout << "\n The Cube Root of " << number << " is: " << ans;
}