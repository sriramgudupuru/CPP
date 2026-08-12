#include<bits/stdc++.h>
using namespace std;

void find(vector <int> &arr, int size, int num){
    int i;
    for( i=0; i<size; i++){
        if(arr[i] == num)
        {
            cout << i;
            break;
        }

    }
    if(i == size) //it means no item matched the query
    {
        cout << -1;
    }
}
int main(){
    vector <int> arr = {3,4,23,5,6,4,2,9,8};
    int size = arr.size();
    int num;
    cout << "enter number to find its position ";
    cin >> num;
    find(arr,size,num);
}