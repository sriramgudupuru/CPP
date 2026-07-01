#include<bits/stdc++.h>
using namespace std;

class mergingclass {
    public:

     void compmergplace(int start, int mid, int end, vector <int> &arr){ // compare elements in two arrays and place them new temporary array, at last using start and end arguments place temporary array in Orgiganl array. So start and end vertices should not be altered
                vector <int> temp;
                int i;
                int low = start, high = mid +1 ;
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
                for(i = 0; i < temp.size(); i++){
                    arr[start+i] = temp [i];
                }
    }
    void dividing(int start, int end, vector <int> &arr){
        int mid;
            if(start < end){
                mid = (start + end)/2;
                dividing(start, mid, arr);
                dividing(mid + 1, end, arr);
                compmergplace(start,mid,end,arr);
            }
            else{
                return;
            }
    }
};

main(){
    vector <int> arr = {6,5,4,3,2,1,7,4,2,3,7,9};
    mergingclass m;
    m.dividing(0,arr.size() - 1, arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}