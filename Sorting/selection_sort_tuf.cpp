#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int size)
{
    int mini,i,j,temp;
    for(i = 0; i < size; i++)
    {
        mini = i;
        for(j = i+1; j < size; j++)
        {
            if(arr[mini] > arr[j])
                mini = j;
        }
        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    cout << "sorted array is ";
    for(i=0; i<size; i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {3,3434,23,4,23,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}