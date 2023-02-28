#include <iostream>
#include <vector>
using namespace std;


void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {

    

}
int main() {

    int Edges;
    int Vertices;
    cout<<"Enter No.of Vertices : ";
    cin>>Vertices;
    cout<<"Enter No.of Edges : ";
    cin>>Edges;

    vector<int> adj[Vertices];
    vector<int> vis(Vertices, 0);
    for(int i = 0; i < Edges; i++) {
        int u; 
        int v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0; i < Vertices; i++) {
        for(int j = 0; j < adj[i].size(); j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    int start = 0;
    vector<int> ls;
    int visited[Vertices] = {0};
    dfs(start, adj, visited, ls);
}