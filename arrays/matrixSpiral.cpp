#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        void spiralOrder(vector <vector <int>> &matrix){
            int r = matrix.size(), c = matrix[0].size();
            int i = 0, j = 0,rowv = 0, colv = 0, rowtbv = r, coltbv = c,temp,cameIn = 0;;
            while(rowv < r || colv < c){
                temp = coltbv;
                while(temp > 0){
                    cout << " "<< matrix[i][j] << " ";
                    j++;
                    temp--;
                    cameIn = 1;
                }
                rowtbv--;
                if(rowtbv == 0){
                    return;
                }
                if(cameIn == 1){
                    j--;
                    cameIn = 0;
                }
                
                i++;
                rowv++;

                temp = rowtbv;
                
                while(temp > 0){
                    cout << " "<< matrix[i][j] << " ";
                    i++;
                    temp--;
                    cameIn = 1;
                }
                coltbv--;
                if(coltbv == 0){
                    return;
                }
                if(cameIn == 1){
                    i--;
                    cameIn = 0;
                }
                j--;
                colv++;

                temp = coltbv;
                while(temp > 0){
                    cout << " "<< matrix[i][j] << " ";
                    j--;
                    temp--;
                    cameIn = 1;
                }
                rowtbv--;
                if(rowtbv == 0){
                    return;
                }
                if(cameIn == 1){
                    j++;
                    cameIn = 0;
                }
                i--;
                rowv++;

                temp = rowtbv;
                while(temp > 0){
                    cout << " "<< matrix[i][j] << " ";
                    i--;
                    temp--;
                    cameIn = 1;
                }
                coltbv--;
                if(coltbv == 0){
                    return;
                }
                if(cameIn == 1){
                    i++;
                    cameIn = 0;
                }
                j++;
                colv++;

                // coltbv = c - colv;
                // rowtbv = r - rowv;
            }
        }
};

main(){
    // vector <vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector <vector<int>> matrix = {{1},{2},{3}};
    Solution s;
    s.spiralOrder(matrix);
}