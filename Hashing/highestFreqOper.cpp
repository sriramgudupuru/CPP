#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    int i = 0, j = 0,sum = 0,hsum;
    int count = 0, maxcount = 0;
    while(i < nums.size() && j < nums.size()){
        sum = sum + nums[i];
        hsum = nums[i]*(i-j+1);
        if(hsum - sum <= k){
            count = abs((i - j)) + 1;

            maxcount = max(count, maxcount);
            i++;
        }
        else{
            sum = sum - nums[j]-nums[i];
            j++;
        }


    }
    return maxcount;

    }
};
int main(){
    vector <int> nums = {1,2,4,13,13,13,13};
    int k = 5;
    Solution s;
    cout << s.maxFrequency(nums,k);
}