#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout << "enter no.of rowsss ";
    cin >> rows;
    char ch = 'A';
    for (i = 0; i < rows; i++)
    {
        cout << ch;
        for(j = 0; j <= i; j++)
        {
            cout << ch;
        }
         cout << "\n";
		ch++;
    }
    return 0;
}