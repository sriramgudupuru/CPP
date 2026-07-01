#include<bits/stdc++.h>
using namespace std;

class traversal{
    public:
        void dpthsearch(vector < vector <int> > adj, int start,vector <int> &visited){
            cout << start << " ";
            visited[start] = 1;
            // cout << "\n";
            // for(int i = 0; i < visited.size(); i++){//printing visited array
            //     cout << " " << visited[i];
            // }
            // cout << "\n";
            for(int i = 0; i < adj[start].size(); i++){
                if(visited[adj[start][i]] == 0){
                    dpthsearch(adj,adj[start][i],visited);
                }
            }
        }
};
int main(){
    int nv, e;
    cout << "Enter no.of vertices and no.of edges: ";
    cin >> nv >> e;
    vector < vector <int> > adj(nv+1);
    int v1,v2;
    vector <int> visited(nv+1,0);
    for(int i = 0; i < e; i++){
        cout << "\n Enter vertices of each edge: ";
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    
    traversal t;
    int start = 1;
    cout << "\n";
    t.dpthsearch(adj, start, visited);
}