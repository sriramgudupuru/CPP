#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++; 
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}

void mergesort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int arr[] = {4,2,34,123,6,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    for(int i=0; i<size; i++)
        cout << arr[i] << " " << endl;
    return 0;

}