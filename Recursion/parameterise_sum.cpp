#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void su(int n, int s)
{
    if(n == 0)
        cout << s;
    s = s + n;
    su(n - 1, s);
}

int main()
{
    int n;
    cout << "enter a numberr ";
    cin >> n;
    su(n,0);
}