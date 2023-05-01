// Problem Statement:  https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


/*  Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 
    Graph is in the form of adjacency list where adj[i] contains all the nodes ith node is having edge with.

    Example 1:

    Input:  
    V = 5, E = 5
    adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}} 
    Output: 1
    Explanation: 
    1->2->3->4->1 is a cycle  */


class Solution {
    bool detect(int src, vector<int> adj[], int vis[]) {
        vis[src] = 1;
      // Queue for storing node and it's parent ndoe i.e where it came from
        queue<pair<int, int>> q;
        q.push({src, -1});
      // BFS
        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto adjnode: adj[node]) {
              // if node not visited then visit the node and push into the queue
                if(!vis[adjnode]) {
                    vis[adjnode] = 1;
                    q.push({adjnode, node});
                }
              // if node alredy visited and it's not a parent then there is a cycle.
              // we started from two different paths but someone already visited X node before we touched it means there is a cycle in it
                else if(parent != adjnode) {
                    return true;
                }
            }
            
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
      // vis array to track nodes
        int vis[V] = {0};
      // BFS 
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(detect(i, adj, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};
