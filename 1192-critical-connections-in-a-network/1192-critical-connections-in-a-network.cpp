class Solution {
public:
    void dfs(vector<int>&vis, vector<int>&disc, vector<int>&low, int node, vector<vector<int>>&ans, int parent, int& timer, vector<int>adj[]){
        vis[node]=1;
        disc[node]= timer;
        low[node]=timer;
        timer++;
        
        for(auto i: adj[node]){
            if(i == parent)
                continue;
            else if (vis[i] == 1){
                low[node] = min(low[node], disc[i]);
            }
            else{
                dfs(vis, disc, low, i, ans, node, timer, adj);
                low[node] = min(low[node], low[i]);
                if(low[i] > disc[node]){
                    ans.push_back({i, node});
                }
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        for(int i=0;i<connections.size();i++){
            int a = connections[i][0];
            int b = connections[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        vector<vector<int>>ans;
        vector<int>vis(n, 0);
        vector<int>disc(n, 0);
        vector<int>low(n, 0);
        int timer = 1;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(vis, disc, low, i, ans, -1, timer, adj);
            }
        }
        
        return ans;
    }
};