class Solution {
public:
    bool helper(int ind, vector<int>&v, vector<int>& vis){
        vis[ind] = 1;
        if(v[ind] == 0) return true;
        int ans = false;
        if(ind + v[ind] < v.size() && vis[ind + v[ind]] == 0) ans = helper(ind + v[ind], v, vis);
        if(!ans && ind - v[ind] > -1 && vis[ind - v[ind]] == 0) ans = helper(ind - v[ind], v, vis);
        return ans;
    }
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<int>vis(n,0);
        return helper(start, arr, vis);
            
    }
};