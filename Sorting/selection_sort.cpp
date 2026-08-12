#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
    int i,j,min,min_ele_index,temp;
    for(i=0; i<size; i++)
    {
        min = arr[i];
        for(j=i+1; j<size; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                min_ele_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_ele_index];
        arr[min_ele_index] = temp;

    }
    cout << "sorted array is : ";
    for(i=0; i<size; i++)
        cout << arr[i] << " ";

}
int main()
{
    int arr[] = {5,4,6,7,43,2,3,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
}