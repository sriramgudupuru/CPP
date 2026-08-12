#include<bits/stdc++.h>
using namespace std;

void checkArraySort(int arr[],int high)
{
    int swapped = 0;
    int temp;
    int max = arr[high];
    for(int i=0; i<high; i++){
        if(arr[i]>arr[i+1])
        {
            swapped = 1;
        }
        if(swapped == 1)
            break;
    }
    if(swapped == 1)
        cout << "array is not sorted";
    else
        cout << "array is sorted";
}
int main(){
    int arr[] = {1,2,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    checkArraySort(arr,size-1);
}