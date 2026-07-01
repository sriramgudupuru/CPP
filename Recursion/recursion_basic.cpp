#include<bits/stdc++.h>
using namespace std;

class recursion{
    public:
        void rec(int num,string name){
            if(num == 0){
                // cout << name;
                return ;
            }
            else{
                rec(num-1,name);
            }
            cout << name << " ";
        }
};

int main(){
    int num;
    string s;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a name to repeat: ";
    cin >> s;
    recursion r;
    r.rec(num,s);
    
}