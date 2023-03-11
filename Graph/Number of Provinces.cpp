// Problem statement:
// GFG      -->  Number of provinces       : https://practice.geeksforgeeks.org/problems/number-of-provinces/1
// Leetcode -->  547. Number of Provinces  : https://leetcode.com/problems/number-of-provinces/description/



class Solution {
private:
    void dfs(int node, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1;
        for(auto it: adj[node]) {
            if(! vis[it]) {
                dfs(it, vis, adj);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int row = isConnected.size();
        int col = isConnected[0].size();
        vector<int> adj[row];
        // converting Adj matric to Adj list
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < row; j++) {
                if(isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    //adj[j].push_back(i);
                }
            }
        }
        int count = 0;
        vector<int> vis(row, 0);
        for(int i = 0; i < row; i++) {
            if(!vis[i]){
                count++;
                dfs(i, vis, adj);
            }
        }
        return count;
    return 0;
    }
};
