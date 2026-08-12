#include<bits/stdc++.h>
using namespace std;

void leftRotateDplaces(vector <int> &arr, int high, int d){
    vector <int> arr2;
    for(int i=0; i<d; i++)
    {
        arr2.push_back(arr[i]);
    }
    int j=0;
    for(int i=0; i<=high-d+1; i++)
    {
       
        arr[i]= arr[i+2];
    }
    for(int i= high-d+1; i<=high; i++)
    {
        arr[i] = arr2[j++];
    }
    for(int i=0; i<=high; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector<int> arr = {3,3,2,5,2,4,5};
    int d;
    cout << "Enter how many places you want to left shift \n" ;
    cin >> d;
    leftRotateDplaces(arr,arr.size() - 1,d);
    
}