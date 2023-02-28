#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {

    int vertices;
    int edges;
    cout<<"Enter No.of Vertices : ";
    cin>>vertices;
    cout<<"Enetr No.of Edges :";
    cin>>edges;
    vector<int> adj[vertices];
    vector<int> vis(vertices, 0);
    vis[0] = 1;
    for(int i = 0; i < edges; i++) {
        int u;
        int v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0; i < vertices; i++) {
        cout<<i<<": ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    //BFS

    //Declaring a empty Queue
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(! q.empty()) {
        // Take the Queue first element
        int curr = q.front();
        q.pop();
        bfs.push_back(curr);
        // Find the neighbours of current element
        for(auto it: adj[curr]) {
            if(! vis[it]) {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    cout<<"Printing BFS :"<<endl;
    for(int i=0; i<bfs.size(); i++) {
        cout<<bfs[i]<<" ";
    }

    return 0;
}
