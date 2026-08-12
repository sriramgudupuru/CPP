#include<iostream>
using namespace std;

int main()
{
    int rows,j;
    cout << "enter no.of rows ";
    cin >> rows;
    for(int i=0; i < rows; i++)
    {
        for(j = rows-i; j > 0; j--)
            cout << " ";
        for (j = 2*i + 1; j > 0; j--)
            cout << "*";
        for(j = rows - 1; j > 0; j--)
            cout << " ";
        cout << "\n";
    }
}