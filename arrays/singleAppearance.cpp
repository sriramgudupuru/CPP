#include<bits/stdc++.h>
using namespace std;

int singleAppear(int arr[],int size){
    unordered_map <int,int> mp;
    for(int i=0; i<size; i++){
        mp[arr[i]]++;
    }
    int value;
    for(auto it:mp){
        if(it.second == 1){
            value= it.first;
        }
    }
    return value;
}
int main(){
    int arr[] = {2,3,4,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int singleAppe = singleAppear(arr,size);
    cout << singleAppe << " is appeared once only";
}