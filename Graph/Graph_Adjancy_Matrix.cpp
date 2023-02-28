#include <iostream>
#include<vector>
using namespace std;

// Undirected Graph Representation with Adjancy Matrix
// Space Complexity : it uses lot of space complexity
// we are creating  a 2D array of size vector. so, if we have 10^9 vertices in our graph
// Then it is very complex to store such huge information and here we're wasting lot of space
// for example if don't have Node between A and D still we're string their connection as False (0)
// so in this case we're stpring lot of zero's

int main() {
    int vertices, edges;
    cout<<"Enter vertices : ";
    cin>>vertices;
    cout<<"Enter Edges : ";
    cin >> edges;

    // initializing 2D vector with all zero's
    vector<vector<int> > adj(vertices, vector<int>(vertices, 0));

    // Taking Edges Data and marking then in Adjancy Matrix
    for(int i = 0;i < edges; i ++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // Printing Graph 2D Model
    for(int i = 0;i < vertices; i++) {
        for(int j = 0; j<vertices; j++) {
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}