#include<iostream>
#include<vector>
#include<queue>
class tree{
    public:
       void adjacency_list(int n,int e, std::vector<std::vector<int>> &adj){
            for(int i=0; i<n; i++){//printing adjacent vertices of every vertex (i.e with which vertex our present vertex is forming edge). Note there can be duplicates
                for(int j=0;j<adj[i].size();j++ ){
                std:: cout << adj[i][j] <<"\n";
                }
               std::cout << "\n";
            }
        }
        void bfs(int starting_vertex,int n, std::vector <std::vector<int>> &adj){
            std::vector<int> visited(n,0);
            std::queue<int> q;
            q.push(0);
            std :: cout << "bfs of the given tree is :";
            while(!q.empty()){
                int f = q.front();
                q.pop();

                if(visited[f]==0){
                    std::cout<<f << " ";
                    // for(int i=0; i<adj[f].size();i++){//pushing adjacent vertices into queue
                    //     q.push(adj[f][i]);
                    // } //or
                    for(auto i : adj[f]){ //above for loop and this for loop do the same
                        q.push(i);
                    }
                    visited[f]=1;
                }
            }
            
        }

};
int main(){
    int n = 9, e = 9 ;
    int starting_vertex = 0;
    std::vector <std::vector<int>> adj(n);
 
    for(int i = 0; i < e; i++){ //cretes an adjacent list (so, 2 dimensional)
        int u,v;
        std::cout << "Enter Edges\n";
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    tree t;
    t.adjacency_list(n,e,adj);
    t.bfs(starting_vertex,n,adj);
    return 0;
}