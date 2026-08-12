#include<iostream>
using namespace std;

int main(){
    int rows,i,j;
    cout << "enter no.of rows";
    cin >> rows;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < i; j++)
            cout << " ";
        for(j = 2*(rows-i) - 1; j > 0; j--)
            cout << "*";
        for(j = 0; j < i; j++)
            cout << " ";
        cout << "\n";
    }
}