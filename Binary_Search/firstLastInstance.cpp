#include<iostream>
#include<vector>
using namespace std;
void left_index(vector<int>& , int, int, int,int &,int &);
void right_index(vector<int>&, int, int, int,int &,int &);
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int mid, s = nums.size(), left = 0, right = s-1;
        int res1 = -1, res2 = -1;
        while(left <= right){
            mid = (left + right)/2;
            if(nums[mid] == target){
                res1 = mid;
                res2 = mid;
                left_index(nums, target, left, mid - 1, res1,res2);
                right_index(nums, target, mid + 1, right, res1, res2);
                break;
            }
            else if(nums[mid] > target){
                right = (mid - 1);
            }
            else{
                left = mid + 1;
            }
        }
        return {res1,res2};
    }
};

void left_index(vector <int> & nums, int target, int left, int right, int &res1,int &res2){
    int mid;
    
    while(left <= right){
            res1 = right + 1;
            mid = (left + right)/2;
            if(nums[mid] == target){
                res1 = mid;
                left_index(nums, target, left, mid - 1,res1,res2);
                
                break;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
    }
}           

void right_index(vector <int> & nums, int target, int left, int right, int &res1,int &res2){
    int mid;
    
    while(left <= right){
            res2 = left - 1;
            mid = (left + right)/2;
            if(nums[mid] == target){
                res2 = mid;
                
                right_index(nums, target, mid + 1, right,res1,res2);
                break;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
    }
}

main(){
    vector <int> nums = {5,7,7,8,8,10};
    Solution s;
    vector <int> result= s.searchRange(nums, 8);
    cout << result[0] << " " << result[1];
}