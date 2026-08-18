#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            mid = (left + right)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if (nums[mid] >= nums[left]){ // i.e left half is sorted
                if(nums[mid] > target && nums[left] <= target){ // element is in left half
                    right = mid - 1;
                }
                else{ //element is in right half
                    left = mid + 1;
                }
            }
            else{// mid element is not greater than left most element of present array i.e left half is unsorted and whole right half is sorted
                if(nums[mid] > target ){ //after mid is always increases so if target is less than mid element then target is in left half
                    right = mid - 1;
                }
                else if(target > nums[mid] && target <= nums[right]){  // i.e it is in right half
                    left = mid + 1;
                }
                else{ // it is in left half
                    right = mid -1;
                }
            }
        }
        return -1;
    
    }
};

main(){
    vector <int> a = {5,1,3};
    Solution s;
    cout << s.search(a,5);
}