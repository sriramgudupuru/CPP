#include<bits/stdc++.h>
using namespace std;

void fun(int n){
        int store = n;
        if (n==0){
            return;
        }
        else{
            fun(--n);
        }
        cout << store;
    }
int main(){
    int n = 5;
    fun(n);
    
}