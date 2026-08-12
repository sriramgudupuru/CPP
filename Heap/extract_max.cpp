#include<bits/stdc++.h>
using namespace std;

void max_heapify(vector <int> &arr, int n,int pos){
    int left = 2*pos+1;
    int right = 2*pos+2;
    int largest = pos;
    if((left < n-1) && arr[left] > arr[largest] ){
        largest = left;
    }
    if((right < n-1) && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != pos){
        swap(arr[largest],arr[pos]);
        max_heapify(arr, n, largest);
    }

}
int main(){
    vector <int> arr = {8,6,5,3,2,1};
    int max = arr[0];
    cout << "Max element is " << max << "\n";
    arr[0] = arr[arr.size()-1];
    max_heapify(arr, arr.size()-1,0);
    for(int i = 0; i < arr.size()-1; i++){
        cout << arr[i];
    }
    
}