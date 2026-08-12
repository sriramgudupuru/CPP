#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    map <char, int> mpp;
    for(i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
        // cout << mpp[i].first << "->" << mpp[i].second;
        
    }
    for(auto i : mpp)
        cout << i.first << "->" << i.second << endl;

}