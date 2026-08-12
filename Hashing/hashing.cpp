#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,i,query;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n],hashh[100000] = {0};
    for(i = 0; i < n; i++)
        cin >> arr[i];
    //precompute
    for(i = 0; i < n; i++)
        hashh[arr[i]]++;
    cout << "Enter how many queries you will do ";
    cin >> j;
    for(i = 0; i < j; i++)
    {
        cin >> query;
        cout << "no.of times " << query << " present is : " <<hashh[query] << endl;
    }

}