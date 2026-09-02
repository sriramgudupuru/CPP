#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(),bloomDay.end());
        int s = bloomDay.size();
        long long n = (long long)m*k;
        int ans = -1;
        if(s < (n)){
            return -1;
        }
        function<bool(int)> possible = [&bloomDay, m,k,s](int days){
            int made = 0;
            int count = 0;
            for(int i = 0; i < s; i++){
                if(bloomDay[i] <= days){
                    count = count + 1;
                }
                else{
                    made = made + count / k;
                    count = 0;
                }
            }
            made += count/k;
            if(made >= m){
                return true;
            }
            else return false;
        };
        while(left <= right){
            int mid = (left + right)/2;
            if(possible(mid)){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
        
    }
};

main(){
    vector <int> bloomDay = {1,10,3,10,2};
    int m = 3;//no.of boquets
    int k = 1; //no.of adj flowers needed
    Solution s;
    cout << s.minDays(bloomDay, m, k);
}