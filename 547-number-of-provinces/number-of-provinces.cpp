class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node] = true;
        for(int nei = 0; nei < adj.size(); nei++) {
            if(adj[node][nei]==1 && !vis[nei]){
                dfs(nei, adj, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<bool> vis(V, false);
        int c{};
        for(int i=0; i<V; i++){
            if(!vis[i]){
                c++;
                dfs(i, isConnected, vis);
            }
        }
        return c;
    }
};