#include<bits/stdc++.h>
using namespace std;

void selectSort(int arr[],int size)
{
    int i,j,temp,mini=0;
    for(j=0; j<size; j++)
    {
        mini = j;
        // temp = arr[j];
    for(i=j+1; i<size; i++)
    {
        if(arr[mini] > arr[i])
        {
            mini = i;
            // temp = arr[i];
        }
    }
    temp = arr[mini];
    arr[mini] = arr[j] ;
    arr[j] = temp;
}

}
int main()
{
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectSort(arr,size);
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    return 0;
}