#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rec(int n){
    if(0 == n)
        return;
    cout << n << " ";
    n--;
    rec(n);
}
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    rec(n);
}