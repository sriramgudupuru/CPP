// Find the number that appears once, and the other numbers twice
#include<bits/stdc++.h>
using namespace std;

int arrayHash(int arr[], int size)
{
    int maxi = arr[0];
    
    for(int i=1; i<size; i++){
        maxi = max(maxi,arr[i]);
    }
    vector <int> freq(maxi+1,0);

    for(int i=0; i<size; i++ )
    {
        freq[arr[i]]++;
    }
    for(int i=0; i<size; i++)
    {
        // cout <<arr[i]<<" "<< freq[arr[i]] << " \n";
        if(freq[arr[i]] == 1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,3,2,7,6,3,4,5,5,4,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value = arrayHash(arr, size);
    cout << value;
}