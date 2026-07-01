#include<bits/stdc++.h>
using namespace std;

class recursion{
    public:
    int coun;
    recursion():coun(5)//initializer list
    {
        cout <<"Hello";
        
    }
    public:
        void rec(int num){
            if(coun == num+1){
                return;
            }
            cout << coun++;
            rec(num);
        }
};

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    recursion r;
    r.rec(num);

}

//Learn about class completely today.