#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {4,4,5,5,6,7,7,7};
    int size = arr.size();
    vector <int> arr2;
    arr2.push_back(arr[0]);
    for(int i=0; i<size-1; i++){
        if(arr[i]<arr[i+1])
        {
            arr2.push_back(arr[i+1]);
        }
    }
      
    cout  << "Array without duplicates is \n " ;
  
    for(int i=0; i<arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
}