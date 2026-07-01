#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows,j;
        vector<vector<int>> pascal;
        pascal.push_back({1});
        pascal.push_back({1,1});
        vector <int> v;
        for(int i = 2; i < n; i++){
            v.push_back(1);
            for(j = 1; j < i ; j++){
                v.push_back( pascal[i-1][j-1] + pascal[i-1][j] );
            }
            v.push_back(1);
            pascal.push_back(v);
            v = {};
        }
        return pascal;
        
        
    }
};

main(){
    Solution s;
    vector<vector<int>> pascal = s.generate(4);
    for(const auto &row : pascal){
        for(const auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }

}