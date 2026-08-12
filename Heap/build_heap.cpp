#include<bits/stdc++.h>
using namespace std;
void max_heapify(vector <int> &arr,int i){
    int left = 2*i + 1;
    int right = 2*i + 2;
    int largest = i;
    if(left < arr.size() && arr[left] > arr[i]){
            largest = left;
    }
    if(right < arr.size() && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){// without this it might run forever bcz if it is already hepified then it calls max_hepify algo forever
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest);
    }

}
int main(){
    vector <int> arr = {4,5,2,3,6,7};
    for(int i = floor(arr.size()/2) - 1; i>=0; i--){
        max_heapify(arr,i);
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}  