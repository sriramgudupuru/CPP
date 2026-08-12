#include<bits/stdc++.h>
using namespace std;

int maxSeqOnes(int arr[],int size){
    int maxi=0, count=0;
    for(int i=0;i<size; i++){
        if(arr[i] == 1){
            count = count+1;
        }
        else{
                count =0;
            
        
        }
        maxi = max(maxi,count);

    }
    if(count > maxi)
    {
        return count;
    }
    else return maxi;
}
int main(){
    int arr[] = {1,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxOnes = maxSeqOnes(arr,size);
    cout << " max no.of ones are " << maxOnes;
}