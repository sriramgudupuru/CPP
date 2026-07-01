#include<bits/stdc++.h>
using namespace std;

class traversal{
    public:
        void depthFirst(vector< vector <int> > adj,int nv, int stack_top, vector <int> &visited){
            int currStaEle = stack_top;
            visited[ stack_top ] = 1;
            cout << stack_top << " ";
            for(int i = 0; i < adj[stack_top].size(); i++){
                if(visited[ adj[stack_top][i] ] == 0){
                        depthFirst(adj, nv, adj[stack_top][i], visited);
                }
            }
        }
};

int main(){
    int nv,e,v1,v2,start;
    cout << "Enter no.of vertices and edges: ";
    cin >> nv >> e;
    vector <vector <int> > adj(nv+1);
    for(int i = 0; i < e; i++){
        cout << "Enter vertices of edge: ";
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    traversal d;
    cout << " Enter starting vertex: ";
    cin >> start;
    vector <int> visited(nv+1,0);
    d.depthFirst(adj,nv,start,visited);
}