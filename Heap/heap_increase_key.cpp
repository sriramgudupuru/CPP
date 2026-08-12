#include<bits/stdc++.h>
using namespace std;

void heap_increase(vector <int> &arr, int i,int key){
    if(arr[i] >= key){
        cout << "key is not greater than the element";
        return ;
    }
    arr[i] = key;
    while(i>0 && arr[(i-1)/2] < arr[i]){ //floor is not needed since it automatically takes int value
        swap(arr[i],arr[(i-1)/2]);
        i = (i-1)/2;
    }
}
int main(){
    vector <int> arr = {6,5,4,3,2};
    int key,pos;
    cout << "enter what value you want to place ";
    cin >> key;
    cout << "enter which positioned value u want to change " ;
    cin >> pos;
    heap_increase(arr,pos,key);
    for(int i = 0; i< arr.size(); i++){
        cout << arr[i];
    }
}