#include<bits/stdc++.h>
using namespace std;

void recInsertSort(int arr[],int i,int size)
{
    if(i == size)
    {
        return;
    }
    int k=i;
    int temp;
    while(k>0 && arr[k]<arr[k-1])
    {
        temp = arr[k];
        arr[k] = arr[k-1];
        arr[k-1] = temp;
        k--;
    }
    recInsertSort(arr,++i,size);
}
int main(){
    int arr[] = {5,4,3,5,1,4,23,43,23,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    recInsertSort(arr,0,size);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

}