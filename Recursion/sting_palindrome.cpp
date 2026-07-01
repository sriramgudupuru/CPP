#include<bits/stdc++.h>
using namespace std;

class stringPal{
    public:
        bool palindrome(string s,int &start, int &end){
                if(start>=end){
                    return true;
                }
                else if (s[start] == s[end])
                {
                    return palindrome(s, ++start, --end);
                }
                else{
                    return false;
                }
               
                
        }
};

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    stringPal p;
    int start = 0;
    int end = s.size()-1;
    bool result = p.palindrome(s,start,end);
    cout << result;
}