#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void largeNum(string s){
            long long i = stoll(s);
            while( i%2 == 0 && i != 0){
                i = i / 10;
            }
            if(i == 0){
                cout << "";
            }
            else{
                cout << i;
            }
        }
};

main(){
    string s;
    cout<< "Enter String ";
    cin >> s;
    Solution l;
    l.largeNum(s);
}