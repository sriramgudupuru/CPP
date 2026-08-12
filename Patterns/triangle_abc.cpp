#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cout << "enter no.of rows ";
    cin >> rows;
    char a;
    for(i = 0; i < rows; i++)
    {
        a = 'A';
        for(j = 0; j <= i; j++)
            cout << a++;
        cout << "\n";
        
    }
}