#include<iostream>
using namespace std;

int main()
{
    int n,ncp,r = 0,rem;
    cout << "enter a number to reverse ";
    cout << "\n";
    cin >> n;
    ncp = n; 
    while (ncp > 0)
    {
        rem = ncp % 10;
        ncp = ncp / 10;
        r = r*10 + rem;

    }
    cout << "reverse of the number is " << r;
}