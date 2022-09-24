class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& v) {
        vector<int>in(n, 0), adj[n];
        for(auto i:v){
            adj[i[1]].push_back(i[0]);
            in[i[0]]++;
        }
        queue<int>q;
        for(int i=0; i<n; i++) if(!in[i]) q.push(i);
        
        while(q.size()){
            int ele = q.front();
            q.pop();
            for(auto i:adj[ele]){
                in[i]--;
                if(!in[i]) q.push(i);
            }
        }
        for(auto i:in) if(i) return false;
        return true;
    }
};