#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(),i;
        int limit = n/3;
        vector<int> result;
        unordered_map <int,int> m;
        for(i = 0; i < n; i++){
            m[i]++;
        }
         cout << endl;
        for(auto pair : m){
            cout << pair.first << " " <<pair.second << " ";
            if(pair.second > limit){
                result.push_back(pair.first);
            }
        }
        cout << endl;
        return result;
    }
};

main(){
    vector<int> nums = {3,2,3};
    Solution s;
    nums = s.majorityElement(nums);
    for(auto val : nums){
        cout << val << "Hello" <<" ";
    }
}