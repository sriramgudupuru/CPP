#include<iostream>
using namespace std;

int main()
{
    int rows,i;
    char ch;
    cout << "enter no.of rows";
    cin >> rows;
    for(i = 0; i < rows; i++)
    {
        for (ch = 'A'; ch <= 'A' + i; ch++ )
        {
                cout << ch;

        }
        cout << "\n";
    }
}