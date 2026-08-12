#include<iostream>
using namespace std;

int main()
{
    int rows, i,j;
    cout << "enter no.of rows ";
    cin >> rows;
    char ch;
    for(i = 0; i < rows; i++)
    {
        for(j = rows - i; j > 0; j--)
        {
            cout << " ";
        }
        for(ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;

        }
        ch = ch - 2;
        // cout << ch;
        for(; ch >= 'A'; ch--)
        {
            cout << ch; 
        }
        cout << "\n";
    }
}