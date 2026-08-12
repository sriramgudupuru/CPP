#include<iostream>
using namespace std;

int main()
{
    int rows,i;
    cout << "enter no.of rows ";
    cin >> rows;
    char ch;
    for(i = 0; i < rows; i++)
    {
        for(ch = 'A'; ch < 'A' + rows - i; ch++ )
            cout << ch;
        cout << "\n";
    }
}