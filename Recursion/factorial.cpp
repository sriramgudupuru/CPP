#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 1)
        return n * 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "enter a number to find its factorial ";
    cin >> n;
    fact(n);
}