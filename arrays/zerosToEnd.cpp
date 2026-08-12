#include<bits/stdc++.h>
using namespace std;

void zerosToEnd(vector <int> &arr, int size)
{
    int l = 0,r = size-1;
    int temp = 0;
    while(l<r){
        if(arr[l]==0)
        {
            while(arr[r]==0 && r>l)
            {
                r--;
            }
            if(l<r)
            {
                temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
            }
           
        }
        l++;
    }
}
int main(){
    vector <int> arr = {1,1,1,1,0,1,1,1,1};
    int size = arr.size();
    zerosToEnd(arr,size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}