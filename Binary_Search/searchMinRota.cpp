#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int> nums) {
        int left = 0, right = nums.size() - 1, mid;
        while(left <= right){
            mid = (left + right)/2;
            if(nums[mid] >= nums[left]){
                if(nums[left] > nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            else{
                left = left + 1;
                right = mid;
            }
        }
        return nums[mid];
    }
};

main(){
    Solution s;
    cout << s.findMin({3,4,5,1,2});
}