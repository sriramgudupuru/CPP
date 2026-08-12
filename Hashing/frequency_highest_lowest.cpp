#include<bits/stdc++.h>
using namespace std;
void freq_count(int arr[],int size)
{
    unordered_map <int,int> mp;
    int i,least,most;
    for(i=0; i<size; i++)
    {
        mp[arr[i]]++;
    }
    for(auto i : mp)
        cout << i.first << " " << i.second << endl;
    least = (*(mp.begin())).second;
    int lv,mv;
    most= (*(mp.begin())).second;
    for(auto i:mp)
    {
        if(i.second < least)
        {
            least = i.second;
            lv = i.first;
            cout << "least is " << lv << endl;
        }
        if(i.second > most)
        {
            most = i.first;
            mv = i.first;
            cout << " most is " << mv << endl;
        }
    }
    cout << lv << "is least frequency" << endl;
    cout << mv<< "is most freuent" << endl;
}
int main()
{
    int arr[] = {2,8,3,2,3,4,5,5,3,4,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    freq_count(arr, size);
    return 0;
}