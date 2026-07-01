#include<bits/stdc++.h>
using namespace std;

class longestSubArrayPositives{
    public:
        int longest(vector <int> &arr,int k){
            int i = 0, j = 0, sum = 0, maxSize = 0;

            for(; i < arr.size(); i++){
                sum = sum + arr[i];
                while(sum > k){
                    sum = sum - arr[j];
                    j++;
                }
                if(sum == k){
                    maxSize = max(maxSize, i-j+1);

                }
                
            }
            return maxSize;
        }
};

main(){
    vector <int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    longestSubArrayPositives l;
    int size = l.longest(arr,k);
    cout << size;

}