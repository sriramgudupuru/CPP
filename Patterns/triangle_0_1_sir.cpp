#include<iostream>
using namespace std;

int main()
{
    int rows,i,j, start;
    cout << "enter no.of rows ";
    cin >> rows;
    for(i = 0; i < rows; i++)
    {
        if(i % 2 == 0)
            start =1;
        else start = 0;
        for(j = 0; j <= i; j++)
        { 
            cout << start;
            start = 1 - start;

        }
        cout << "\n";
    }

}