#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ncp,a,b,i=0,gcd=1;
    cout << "enter two numbers ";
    cin >> a >> b;
    n = min(a,b);
    for( i = 1; i*i <= n; i++)
    {
        if((n % i == 0) && (b % i == 0) )
        {
            if(i > gcd)
                gcd = i;
        
            if((n / i != i) && (b % (n/i) == 0) && (n/i) > gcd)
                gcd = n/i;
                // cout << gcd;
        }
    }
    cout << gcd;
}