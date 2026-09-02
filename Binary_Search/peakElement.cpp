#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m = *max_element(piles.begin(),piles.end());
        int left = 1, right = m, mid, s = piles.size(),nh, mini = m;
        if(s == h){
            return m;
        }
        while(left <= right){
            mid = (left + right)/2;
            nh = 0;
            for(int i = 0; i < s; i++){
                    if(mid == 3){
                        cout << ceil(((float)piles[i] )/ mid) << " ";
                    }
                    nh = nh +  ceil(((float)piles[i] )/ mid); 
                    
            }
            if(nh == h){
                mini = min(mid, mini);
                right = mid - 1;
                cout << "min is " << mini << " nh is "<< nh << "mid is " << mid<< endl;

            }
            else if(nh > h){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return mini;
    }
};
main(){
    vector <int> v = {312884470};
    Solution s;

    cout << s.minEatingSpeed(v, 312884469);

}