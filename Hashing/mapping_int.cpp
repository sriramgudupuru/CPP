#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
    map <int,int> mpp;
    for(i = 0; i < n; i++)
        mpp[arr[i]]++;
     //printing key, value pairs of map before searching a key
    for(auto i : mpp)
        cout << i.first << "->" << i.second << endl;
    int query,m;
    cout << "enter no.of queries ";
    cin >> m;
    for(i = 0; i < m; i++)
    {
        cin >> query;
        cout << "no.of times " << query << " present is : " << mpp[query] << endl;
    }
    //printing key, value pairs of map after searching a key
    for(auto i : mpp)
        cout << i.first << "->" << i.second << endl;
}