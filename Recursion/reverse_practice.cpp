#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rvs(int *arr, int n, int i)
{
    int temp;
    if(i >= n/2)
        return;
    
    else
    {
        // temp = arr[i];
        // arr[i] = arr[n-1-i];
        // arr[n-1-i] = temp;
        swap(arr[i],arr[n-i-1]);
        i++;
        rvs(arr,n,i);
    }
        
}
int main(){
    int n;
    cout << "enter no.of elementss ";
    cin >> n;
    int arr[n],i;
    cout << "enter elements";
    for(i = 0; i < n; i++)
        cin >> arr[i];
    rvs(arr,n,0);
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";
}