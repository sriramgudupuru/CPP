#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid;
        while(left <= right){
            mid = (left + right)/2;
            if(nums[mid] == target){
                return true;
            }
            else if(nums[mid] == nums[left] && nums[mid] == nums[right]){
                    left++;
                    right--;
            }
            else if(nums[mid] >= nums[left]){//i.e left part is sorted 
                if( target <= nums[mid] && target >= nums[left]){ //and target lies in left part
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            else if(nums[mid] <= nums[right]){
                if(target >= nums[mid] && target <= nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            else {
                return false;
            }
        }
        return false;
    }
};

main(){
    Solution s;
    vector <int> v = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    cout << s.search(v,2);
}