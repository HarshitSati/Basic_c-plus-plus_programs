#include <iostream>
using namespace std;
void multiply(int[5][5], int[5][5], int, int, int);
int display(int[5][5], int, int);
int main()
{

    int a[5][5], b[5][5], r1, c1, r2, c2;
    cout << "\n Enter rows for first matrix: ";
    cin >> r1;
    cout << "\n Enter columns for second matrix: ";
    cin >> c1;

    cout << "\n Enter rows for first matrix: ";
    cin >> r2;
    cout << "\n Enter columns for second matrix: ";
    cin >> c2;

    if (c1 != r2)
        return 0;

    cout << "\n Enter elements of first matrix \n";

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];
    }

    cout << "\n Enter elements of second matrix\n";

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];
    }
    display(a, r1, c1);
    display(b, r2, c2);

    multiply(a, b, r1, c2, c1);
    return 0;
}

void multiply(int a[5][5], int b[5][5], int row, int col, int c1)
{
    int c[5][5];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            c[i][j] = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "\n Matrix c after matrix multiplication is:\n";
    display(c, row, col);
}
int display(int c[5][5], int row, int col)
{
    cout << "\n Matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << c[i][j] << " ";
        cout << "\n";
    }
    return 0;
}