#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>&& nums, int threshold) {
        int left = 1, right = *max_element(nums.begin(), nums.end());
        int mid, ans;
        int s = nums.size();
        if(s == threshold){
            return right;
        }
        while(left <= right){
            int t = 0;
            mid = (left + right)/2;
            for(int i = 0; i < s; i++){
                t += ((nums[i]+mid - 1)/mid) ;
            }
            if(t > threshold){
                left = mid + 1;
            }
            else{
                ans = mid;
                right = mid - 1;
                // cout << ans << " ";
            }
        }
        return ans;
    }
};

main(){
    Solution s;
    cout << s.smallestDivisor({19},5);
}