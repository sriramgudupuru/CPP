#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
}
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    cout << "sum is " << sum(n);

}