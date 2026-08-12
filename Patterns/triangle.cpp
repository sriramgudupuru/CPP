#include<iostream>
using namespace std;

int main()
{
    int rows,k,rowstars=1;
    cout << "enter no.of rows";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for(int j=0; j < rows-i; j++)
        {
                cout << " ";
        }
        k=rowstars;
        while(k > 0)
        {
            cout << "*";
            k--;
        }
        cout << "\n";
        rowstars = rowstars+2;
    }
}