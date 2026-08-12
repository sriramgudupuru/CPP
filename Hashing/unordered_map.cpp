#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "No.of elements you want to check frequency for ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map <int, int> mp;
    for(auto e : arr)
        mp[e]++;
    // for(auto k : mp)
    //     cout << k.first << " " << k.second <<"\n" ;
    //finding frequency through queries
    int q,j;        
    cout << "Enter no.of queries you want to ask ";
    cin >> q;
    while(q--)
    {
        cout << "your query plz ";
        cin >> j;
        cout << "Frequency is " << mp[j] << endl ;
    }
    //if we want to fetch the value of a key that does not exist in the map, the map will alwys return in 0 in c++ and null in java
}