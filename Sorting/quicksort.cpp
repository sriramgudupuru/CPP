#include<bits/stdc++.h>
using namespace std;

class quicksort{
    public:
        int pivotplacing(int start,int end,vector <int> &arr){
            
            int pivot = arr[end];
            int j = start;
            for(int i = start; i < end; i++){
                if(arr[i] > pivot){
                    continue;
                }
                else{
                
                    swap(arr[i],arr[j]);
                    j++;
                }
            }
            swap(arr[j],arr[end]);
            return j;
        }
        void partitioning(int start,int end,vector <int> &arr){
            if(start < end){
                int originalpos = pivotplacing(start,end,arr);
                partitioning(start,originalpos-1,arr);
                partitioning(originalpos+1,end,arr);
            }
            
        }


};

main(){
    vector <int> arr = {5,6,2,3,4};
    quicksort q;
    q.partitioning(0,arr.size()-1,arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    
}