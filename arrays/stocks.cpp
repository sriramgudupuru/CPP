#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, mini,maxProfit = 0;
        for(int i = prices.size() - 1; i > 0; i--){
            mini = *min_element(prices.begin(),prices.begin()+i-1);
            profit = prices[i] - mini;
            if(profit > 0){
                maxProfit = max(profit,maxProfit);
            }
        }
        return maxProfit;
    }
};

main(){
    vector <int> arr = {2,1,4};
    
}