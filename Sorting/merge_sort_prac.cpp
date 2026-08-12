//my quest not completed. checking if i can use temp variable and make it inplace algorithm.
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low, right = mid+1;
    vector <int> temp;
    while((left<= mid) && right <= high)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else   {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}
void mergeSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}
int main(){
    int arr[] = {9,8,7,6,5,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr,0,size-1);
    for(int i =0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
   
}