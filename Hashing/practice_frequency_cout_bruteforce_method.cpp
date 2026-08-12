#include<bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int size)
{
    int i,j,c;
    bool visited[size] = {false};
    unordered_map <int,int> storage;
    for(i=0; i<size; i++)
    {
        if(visited[i] == true)
            continue;
        for(j=i+1; j<size; j++)
            if(arr[i] == arr[j])
            {
                storage[arr[i]]++;
                visited[j] = true;
            }
            
    }
    for(auto c : storage)
        cout << c.first << " " << c.second << endl;
}
int main()
{
    int arr[] = {1,2,3,4,1,2,3,4,5,3}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,size);
    return 0;
}