#include<bits/stdc++.h>
using namespace std;

class bubbleSort{
    public:
        void bSort(vector <int> &v){
            int didSwap=0;
            for(int i = 0; i < v.size(); i++){
                int maxi = v[0];
                for(int j = 0; j<v.size()-1-i; j++){
                    if(v[j] > v[j+1]){
                            swap(v[j],v[j+1]);
                            didSwap =1;
                    }
                }
                if(didSwap == 0){
                    return;
                }
            }
        }
};

int main(){
    vector <int> v;
    int element;
    while(cin >> element){
        v.push_back(element);
    }
    bubbleSort b;
    b.bSort(v);
    for(auto val : v){
        cout << val << " ";
    }

}