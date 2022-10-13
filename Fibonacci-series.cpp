#include <iostream>
using namespace std;
int main()
{
    int n, pre, next, last;
    cout << "Number of fibonacci series you want to print: ";
    cin >> n;
    pre = 0;
    next = 1;
    last = pre + next;
    while (n > 0)
    {
        cout << "\n"
             << pre;
        pre = next;
        next = last;
        last = pre + next;
        n--;
    }
    return 0;
}