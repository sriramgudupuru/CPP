#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    // v.emplace_front(6);
    for(vector <int>::iterator it = v.begin();it!=v.end();it++)
        cout << *(it); 
    cout << "\n";
    for(auto i:v)
    {
        cout << i << " " ;
    }
    
}