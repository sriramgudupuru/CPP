#include<bits/stdc++.h>
using namespace std;
class sorting{
    public:
        void merging(int start, int mid, int end, vector <int> &arr){
                int low = start;
                int high = mid+1;
                vector <int> temp;
                while(low <= mid && high <= end){
                    if(arr[low] <= arr[high]){
                        temp.push_back(arr[low]);
                        low++;
                    }
                    else{
                        temp.push_back(arr[high]);
                        high++;
                    }
                }
                while(low <= mid){
                    temp.push_back(arr[low]);
                    low++;

                }
                while(high <= end){
                    temp.push_back(arr[high]);
                    high++;
                }
                for(int i = 0; i < temp.size(); i++){
                    arr[start+i] = temp[i]; 
                }

        }
        void mergeSort(int start, int end,vector <int> &arr){
            int mid;
            if(start < end){
                mid = floor((start + end)/2);
                mergeSort(start,mid,arr);
                mergeSort(mid+1,end,arr);
                merging(start,mid,end,arr);
            }
        }
};

int main(){
    vector <int> arr = {9,4,6,3,54,2,1};
    sorting s;

    s.mergeSort(0,arr.size() - 1, arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}