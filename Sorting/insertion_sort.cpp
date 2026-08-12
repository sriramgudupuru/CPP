#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
    int i,j,temp;
    for(i=1; i<size; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(arr[j] > arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
                
        }
        

    }
    for(i = 0; i<size; i++)
    {
        cout << arr[i] << " "<<endl;
    }
}
int main()
{
    int arr[] = {3,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}