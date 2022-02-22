class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>u;
        sort(v.begin(),v.end());
        u.push_back(v[0]);
        for(int i=1; i<v.size(); i++){
            if(v[i][0]<=u[u.size()-1][1]){
                u[u.size()-1][1] = max(u[u.size()-1][1],v[i][1]);
                u[u.size()-1][0] = min(u[u.size()-1][0],v[i][0]);
            }
            else{
                u.push_back(v[i]);
            }
        }
        return u;
    }
};