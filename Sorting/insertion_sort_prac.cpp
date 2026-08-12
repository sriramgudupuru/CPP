#include<bits/stdc++.h>
using namespace std;
void insertSort(int arr[],int size)
{
    int i,j,temp;
    for(i=1; i<size; i++)
    {
        for(j=i; j>0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }

        }
    }
}
int main(){
    int arr[] = {1,2,3,42,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertSort(arr,size);
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
}