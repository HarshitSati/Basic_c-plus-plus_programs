#include <iostream>
using namespace std;

int main()

{

    float c;

    cout << "Enter temperature in Celsius: ";

    cin >> c;

    float f = (9 * c) / 5;

    f += 32;

    cout << "The converted temperature in Fahrenheit is: " << f;
}