#include<bits/stdc++.h>
using namespace std;

void heapify(vector <int> &arr,int i){
    int left = 2*i+1;
    int right = 2*i + 2;
    int largest = i;
    if(left < arr.size() && arr[left]>arr[i]){
        largest = left;
    }
    if(right < arr.size() && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest);
    
    }
    
}
int main(){
    vector <int> arr = {0,9,8,7,6,5};
    heapify(arr,0);
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i];
    }
}