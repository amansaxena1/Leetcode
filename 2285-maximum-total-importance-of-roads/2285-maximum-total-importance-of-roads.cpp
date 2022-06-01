#define llint long long
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<llint, llint>mp;
        for(llint i=0;i<roads.size();i++){
            mp[roads[i][0]]++;
            mp[roads[i][1]]++;
        }
        vector<llint>ans;
        for(auto i:mp) ans.push_back(i.second);
        sort(ans.begin(),ans.end());
        llint res = 0;
        for(llint i=ans.size()-1;i>=0;i--) res += ans[i]*(n--);
        return res;
    }
};