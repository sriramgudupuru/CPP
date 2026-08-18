#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
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
        return -1;
    }
};

main(){
    vector <int> a = {1,2,3,4,5,6};
    Solution s;
    int loc = s.search(a,4);
    cout << "location is " << loc;
}