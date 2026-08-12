#include<bits/stdc++.h>
using namespace std;

void bubbSort(int arr[],int size)
{
    int n = size;
    int i,temp,j;
    for(j=0; j<size; j++)
    {
        int didSwap = 0;
    for(i=0; i<n-j-1; i++)
    {
       if(arr[i]>arr[i+1])
       {
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            didSwap++;
       }
       

    }
    
    for(int k=0; k<size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    if(didSwap == 0)
        break;

}
    // cout << "max element is " << arr[maxi];
    for(int k=0; k<size; k++)
    {
        cout << arr[k] << " ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbSort(arr,size);
    
    return 0;
}