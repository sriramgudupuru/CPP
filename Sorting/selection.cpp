#include<bits/stdc++.h>
using namespace std;

class sorting{
    public:
        
        void selectionSort(vector <int> &v){
            int mini_index = INT_MAX;
            for(int i = 0; i < v.size()-1; i++ ){
                for(int j=i; j < v.size(); j++){
                    if(v[mini_index]>v[j]){
                        mini_index = j;
                    }
                }
                swap(v[mini_index],v[i]);
                mini_index = INT_MAX;
            }
        }
};

int main(){
    
    cout << "Enter elements to sort: ";
    vector <int> v;
    int element;
    while(cin >> element){
        v.push_back(element);
    }
    sorting s;
    s.selectionSort(v);
    for(auto k:v){
        cout << k << " ";
    }
}