#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout << "enter any two numbers to find their gcd ";
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        if(a > b)
            a = a % b; // another way is continuosly subtracting b from a
        else    
            b = b % a;
    }
    cout << "gcd of given numbers is ";
    if(a == 0)
        cout << b;
    else    
        cout << a;


}