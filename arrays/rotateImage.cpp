#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int i,j;
        for(i = 0; i < r; i++){
            for(j = i; j < c; j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
        for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] <<" ";
        }
    }
    cout << endl;
        int k,l;
        for(i = 0; i < r; i++){
            for(j = 0; j <= c/2; j++){
                swap(matrix[i][j],matrix[i][c-1-j]);
            }
        }
    }
};

main(){
    vector<vector<int>> mat= {{1,2,3},{4,5,6},{7,8,9}};
    Solution s;
    s.rotate(mat);
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[0].size(); j++){
            cout << mat[i][j] <<" ";
        }
    }
}