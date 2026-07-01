#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        int a[123]{}, n = s.size();
        for(int i = 0; i < n; i++){
                    a[s[i]]++;   
        }
        sort(a, a + 62, greater<int> ());
        for(int i = 0; i < 123; i++){
            cout << a[i] << " ";
        }
        int k = 0;
        for(int i = 0; i < 123; i++){
            if(a[i] != 0){
                int j = a[i];
                while(j != 0){
                    s[k++] = (char)i;
                    j--;
                }
            }

        }  
        return s;      
    }
};

main(){
    string s = "Aabb";
    Solution k;
    cout << k.frequencySort(s);
}