#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {0,1,2,3,4};
    int i = 0, j = 1;
    int count = 0;
    while(j < arr.size()){
            if((arr[i] == arr[j] ) || arr[i] > arr[j]){
                j++;
            }
            else {
                i++;
                swap(arr[i], arr[j]);
                j++;
                count++; 
            }
        }
       for(int k = 0; k <= count; k++){
        cout << arr[k] <<" ";
       } 
}