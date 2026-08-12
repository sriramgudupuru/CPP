#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout << "enter no.of rowss ";
    cin >> rows;
    char ch;
    for(i = rows; i >= 0; i--)
    {
        for(ch = 'A' + i ; ch <= 'A' + rows; ch++)
            cout << ch;
        cout << "\n";
        // cout << "\n";
    }
}