#include<bits/stdc++.h>
using namespace std;

class sum_n{
    public:
        int s(int n){
            if(n==1){
                return 1;

            }
            return n+s(n-1);
        }
};

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    sum_n su;
    int sum = su.s(num);
    cout << sum;

}