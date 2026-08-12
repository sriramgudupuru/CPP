#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rec(int i,int n)
{
    if(i == n)
        return;
    cout << i << " ";
    i++;
    rec(i,n);
}

int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    rec(1,n);
}