#include <iostream>
#include<vector>
using namespace std;

// Undirected Graph Representation with Adjancy List
// with this approach we're saving lot of space
// we're storing the data only if there is connection between two nodes
int main() {
    int vertices;
    int edges;
    cout<<"Enter No.of Vertices : ";
    cin>>vertices;
    cout<<"Enter No.of Edges : ";
    cin>>edges;

    // Intializing the array of vector. which will act as a list of lists to store the 
    // Edges between two nodes
    vector<int> adj[vertices];
    for(int i=0;i<edges;i++) {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Printing Graph
    for(int i=0;i<vertices;i++) {
        cout<<i<<": ";
        for(int j=0;j<adj[i].size();j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}