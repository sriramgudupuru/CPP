//Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

#include<bits/stdc++.h>
using namespace std;

void subarrSum(int arr[], int size,int Sum){
    int count =0;
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            int m = 0;

                for(int k=i; k<=j; k++)
                {
                    m++;
                    sum = sum + arr[k];
                    cout << arr[k];
                }
                cout << " ";
                if((sum == Sum) && count < m)
                {
                    count = m; 
                    // cout << "count is " << count ;
                }
                sum =0;
        }
        cout << endl;
       
    }
    cout << count;
}
int main(){
    int arr[] = {2,3,5,1,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int Sum = 10;
    subarrSum(arr,size,Sum);

}