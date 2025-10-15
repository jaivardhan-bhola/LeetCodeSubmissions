class Solution {
public:
    void dfs(int node, vector<bool>& visited,vector<vector<int>>& isConnected){
        visited[node]=true;
        for(int i=0;i<isConnected.size();i++){
            if (isConnected[node][i]==1 && !visited[i]) dfs(i, visited, isConnected);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(), false);
        int ans =0;
        for(int i=0;i<isConnected.size();i++) if (!visited[i]) {
            dfs(i,visited, isConnected); ans++;
        }
        return ans;
    }
};