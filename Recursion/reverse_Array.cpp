#include<bits/stdc++.h>
using namespace std;

class reverse_arr{
    public:
        int temp;
        void reverse_ar(vector <int> &v,int start,int end){
            if(start >= end){
                return;
            }
            temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            reverse_ar(v,++start,--end);
        }
};
int main(){
    vector <int> v = {4,5,6,7,8,9};
    int end = v.size();
    reverse_arr ra;

    ra.reverse_ar(v,0,end-1);
    for(int i : v){
        cout << i;
    }

}