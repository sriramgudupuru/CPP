#include<bits/stdc++.h>
using namespace std;
void count_freq(int arr[], int size)
{
    int i;
    unordered_map <int,int> mp;
    for(i=0; i<size; i++)
    {
        mp[arr[i]]++;
    }
    for(auto i:mp)
        cout << i.first << " " << i.second << endl;

}
int main()
{
    int arr[] = {2,3,2,3,4,5,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    count_freq(arr, size);
}