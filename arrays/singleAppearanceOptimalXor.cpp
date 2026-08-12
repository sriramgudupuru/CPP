// Find the number that appears once, and the other numbers twice -- optimal approach

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,2,4,2,4,3,5,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result =0;
    for(int i=0; i<size; i++){
        result = result ^ arr[i];
    }
    cout << result;
}