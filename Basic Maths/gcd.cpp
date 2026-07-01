#include<bits/stdc++.h>
using namespace std;
//go until divisor is zero, now other number is our answer
class gcd{
    public:
        void gc(int a,int b){
            int temp;
            while(a!=0){
                temp = a;
                a=b%a;
                b = temp;

            }
            cout << b;
        }
};

int main(){
    int a,b;
    cout << "Enter numbers ";
    cin >> a >> b;
    gcd g;
    g.gc(a,b);
    return 0;
}