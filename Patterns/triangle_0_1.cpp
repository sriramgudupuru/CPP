#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout << "enter no.of rows ";
    cin >> rows;
    for(i = 0; i < rows ; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0 )
                cout << "1";
            else 
                cout << "0";
        }
        cout << "\n";
    }
}