#include<bits/stdc++.h>
using namespace std;

void largeEle(int arr[],int size)
{
    int i;
int temp = arr[0],temp2;
    for(int i=1; i<size; i++)
    {
        if(arr[i]>temp)
        {
            temp2 = temp;
            temp = arr[i];

        }
    }
    cout << "largest element is " << temp << endl;
    cout << "Second largest element is " << temp2 ;
}
int main()
{
    int arr[] = {3,24,5,2,2,53,23,5,234,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    largeEle(arr,size);
}