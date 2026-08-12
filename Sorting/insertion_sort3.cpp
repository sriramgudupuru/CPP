#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=1; i<size; i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(i=0; i<size; i++)
        cout << arr[i] << " " << endl;
}
int main(){
    int arr[] = {3,2,5,3,2,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}