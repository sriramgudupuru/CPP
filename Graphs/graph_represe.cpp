#include<bits/stdc++.h>
using namespace std;

class traversal{
    public :

        void bfs(vector <vector <int> > &adj, int &start , int nv){
            int q_element;
            vector <int> visited(nv+1,0);
            vector <int> path;
            queue <int> q;
            q.push(start);
            visited[start] = 1;
            while(!q.empty()){
                q_element = q.front();
                path.push_back(q_element);
                q.pop();
                for(int i = 0; i < adj[q_element].size(); i++){
                    if(visited[ adj[q_element][i] ] == 0){
                        q.push(adj[q_element][i]);
                        visited[adj[q_element][i]] = 1;
                    }
                }

            }
            for(int i = 0; i < path.size(); i++){
                cout << path[i ] << " ";
            }

        }
};
int main(){
    int n;
    int e;
    cout << "Enter no.of vertices and Edges ";
    cin >> n >> e;
    vector <vector <int>> adj(n+1);
    cout << "\nEnter edges ";
    int v1,v2;
    for(int i = 0; i < e; i++){
            cin >> v1 >> v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);            
    }
    cout << "\nTell me the starting vertex ";
    int start;
    cin >> start;
    traversal obj;

    obj.bfs(adj,start,n);
}