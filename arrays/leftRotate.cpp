#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector <int> arr, int high){
    int temp;
    temp = arr[0];
    for(int i=0; i<high; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[high]=temp;
    int j;
    for(j=0; j<=high; j++)
    {
        cout << arr[j] << " ";
    }
}
int main()
{
    vector<int> arr = {4,3,2,5,1};
    int size = arr.size();
    // cout << size;
    
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "after "<< "\n";
    leftRotate(arr,size-1);
}