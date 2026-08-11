class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node] = true;
        for(int nei : adj[node]) {
            if(!vis[nei]){
                dfs(nei, adj, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<bool> vis(V, false);
        vector<vector<int>> adj(V);
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(i!=j && isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                }
            }
        }
        int c{};
        for(int i=0; i<V; i++){
            if(!vis[i]){
                c++;
                dfs(i, adj, vis);
            }
        }
        return c;
    }
};