class Solution {
public:
    
    void dfs(int curr, vector<int>temp, vector<vector<int>>&graph, vector<vector<int>>&ans){
        temp.push_back(curr);
        if(curr == graph.size()-1){
            ans.push_back(temp);
            return;
        }
        for(auto i: graph[curr]) dfs(i, temp, graph, ans);
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>temp;
        dfs(0, temp, graph, ans);
        return ans;
    }
};