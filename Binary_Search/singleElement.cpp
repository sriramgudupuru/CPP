#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> nums) {// no.of elements are always odd
    int left = 0, right = nums.size() - 1, mid;
    
    while(left <= right){
        if((right - left + 1) == 1){
            return nums[left];
        }
        mid = (left + right)/2;
        if(nums[mid] == nums[mid - 1]){
            if((mid - left + 1)%2 == 0){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        else if(nums[mid + 1] == nums[mid]){
            if((right - mid + 1)%2 == 0){
                right = mid - 1;
            }
            else {
                left = mid ;
            }
        }
        else{
            return nums[mid];
        } 
    }
    return nums[mid];
    
    }
};

int main(){
    Solution s;
    cout << s.singleNonDuplicate({3,3,7,7,10,11,11});
}