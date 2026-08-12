#include<bits/stdc++.h>
using namespace std;

void count_freq(int arr[], int n)
{
  vector <bool> visited(n,false);
  unordered_map <int,int> storedd;
  int i,j,count;
  for(i = 0; i < n; i++)
  {//count is not needed
    if(visited[i] == true)
      continue;
    visited[i] = true;
    storedd[arr[i]] = 1;
    count = 1;
    for(j = i+1; j < n; j++)
    {
      if(arr[j] == arr[i])
      {  
        storedd[arr[i]]++;
        count++;
        visited[j] = true;
      }
    }    
  }
  cout << storedd.size();
   for(auto i : storedd)
    cout << i.first << " " << i.second << "\n";

}
int main()
{
    int arr[] = {2,5,8,4,8,8,8,4,5,2};
    //note:- output is frequency-1;
    // cout << "hello world" ;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    count_freq(arr, arr_size);
    return 0;
}