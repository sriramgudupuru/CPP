#include<iostream>
using namespace std;

int main()
{
    cout << "enter a number";
    cout << "\n";
    int n,ncp,count = 0;
    cin >> n;
    ncp = n;
    while(ncp > 0)
    {
        ncp = ncp / 10;
        count++;
    }
    cout << "no.of digits are " << count;
}