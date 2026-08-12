#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector <int> > &ar, int u, int v){
    ar[u].push_back(v);
    ar[v].push_back(u);
}
void access(vector<vector<int>> &ar){
    for(int i = 0; i < ar.size(); i++){
        for(int j = 0; j < ar[i].size(); j++){
            cout << ar[i][j] << " ";
        }
        cout << "\n";
    }
    for(auto i: ar){
        // cout << i << "\n";
        for(auto j: i){
            cout << j << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n;
    vector<int> a;
    vector<vector<int>> ar(5);
    addEdge(ar, 0, 1);
    addEdge(ar, 1, 2);
    addEdge(ar, 1, 3);
    addEdge(ar, 0, 4);
    // access(ar);
    
}