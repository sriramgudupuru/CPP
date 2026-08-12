#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ncp,count =0;   
    cout << "enter a number to check ";
    cin >> n;
    if(n < 0) // for negative numbers
    {
        n = -n;
    }
    for(i = 1; i * i <= n; i++) // correct definition for prime number is : there should exist exactly two divisors for any prime number.
    {
        if(n % i == 0)
        {
            count++;
            if(n / i != i)
                count++;
        }
    }
    if (count == 2)
        cout << "Entered number is prime number";
    else 
        cout << "Entered number is not a prime numberoo";
}