#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> m;
        int i = 0, n = s.size();
        if(n != t.size()){
            return false;
        }
        for(; i < n; i++){
            m[s[i]]++;
        }
        for(i = 0; i < n; i++){
            m[s[i]]--;
        }
        for(i = 0; i < n; i++){
            // if(m[s[i]] != 0){
            //     cout << m[s[i]];
            //     return false;
            // }
            cout << m[s[i]] << " ";
        }
        return true;
    }
};

main(){
    string s = "rat", t = "car";
    // cout << "hello";
    Solution a;
    cout << a.isAnagram(s,t);
}