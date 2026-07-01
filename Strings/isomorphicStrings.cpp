#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(), m = t.size(), i = 0;
        map<char, pair<char,int>> mp;
        while(i < n){
            if(mp[s[i]].second == 0 && mp[t[i]].second == 0){
                mp[s[i]] = {t[i],1};
                mp[t[i]] = {s[i],1};
                i++; 
            }
            else if(mp[s[i]].first == t[i] && mp[t[i]].first == s[i]){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

main(){
    string s = "badc", t = "badc";
    Solution k;
    cout << k.isIsomorphic(s,t);
}