/*  C++ Program to find Cube Root of a Number using pow( ) function  */

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    double ans;

    cout<<"Enter number which u want to find cube root :: ";
    cin>>num;

    ans=(double)pow((double)num,(double)1/(double)3);

    cout<<"\nCube Root of [ "<<num<<" ] is :: "<<ans<<"\n";

    return 0;
}