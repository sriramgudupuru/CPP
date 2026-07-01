#include<bits/stdc++.h>
using namespace std;

class longest{
    public:
        void subarray(vector <int> &arr, int k){
            map <int,int> m;
            int sum = 0,rem,sindex, maxLen = 0;
            for(int i = 0; i < arr.size(); i++){
                sum = sum + arr[i];
                rem = sum - k;
                if(sum == k){
                    maxLen = i+1;
                }
               
                else if(m.find(rem) != m.end()){
                    sindex = (*(m.find(rem))).second ; // m.find(rem)->second
                    maxLen = max(maxLen, i - sindex );
                }
                if(m.find(sum) == m.end()){
                        m[sum] = i;
                }
                
            }
            cout << maxLen <<" ";
        }
};

main(){

    vector <int> arr = {2, -1, 2, 3, -2, 4};
    vector <int> arr2 = {1, 0, 0, 2, 3};
    vector <int> arr3 = {-1, -1, 1, 1, 1};
    vector <int> arr4 = {0,0,0,0,0,0};
    vector <int> arr5 = {1,2,3};


    int k2 = 3;
    int k = 4;
    longest l;
    l.subarray(arr,k);
    l.subarray(arr2,k2);
    l.subarray(arr3,1);
    l.subarray(arr4,0);
    l.subarray(arr5,5);

}