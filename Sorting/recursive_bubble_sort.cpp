#include<bits/stdc++.h>
using namespace std;
void recuBubbSort(int arr[],int high,int coun){
    if(high < 0)
        return;
    int temp,didSwap = 0;
    for(int i=0; i<high; i++)
    {
        if(arr[i] > arr[i+1])
        {
            temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1] = temp;
            didSwap = 1;

        }
    }
    coun++;
    if(didSwap == 0)
    {
        cout << "success " << coun << endl;
        return;
    }
    recuBubbSort(arr,high-1,coun);
}
int main(){
    int arr[] = {2,1,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    recuBubbSort(arr,size-1,0);
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}