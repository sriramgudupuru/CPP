#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid;
        if(nums[left] == target){
            return left;
        }
        if(nums[right] == target){
            return right;
        }
        while(left <= right){
            mid = (left + right)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                right = (mid - 1);
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
main(){
    vector <int> a = {1,2,3,4,5,6,6};
    Solution s;
    int pos = s.searchInsert(a,7);
    cout << "position is "<< pos;
}