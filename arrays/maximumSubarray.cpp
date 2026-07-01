#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        int sum = 0, maxiSum = INT_MIN;
        int start = 0, end,sstart = 0;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            if(sum > maxiSum){
                maxiSum = sum;
                end = i;
                start = sstart;
            }
            if(sum < 0){
                sum = 0;
                sstart = i+1;
            }
        }
        return {start,end};
    }
};

main(){
    vector <int> nums = {5,4,-1,7,8};
    int i = nums.size()-1;
    int x = *min_element(nums.begin(),nums.begin()+i-1);
    cout << x << " ";
    Solution s;
    vector <int> res = s.maxSubArray(nums);
    for(auto val : res){
        cout << val << " ";
    }
}