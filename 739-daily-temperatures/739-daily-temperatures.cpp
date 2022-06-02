#define llint int
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        // 73 74 75 71 69 72 76 73
        vector<llint>ans(v.size(),0);
        vector<llint>f(101,1000000);
        for(llint i=v.size()-1;i>=0;i--){
            llint mini = 1000000;
            for(llint j=v[i]+1;j<101;j++) mini = min(mini, f[j]);
            f[v[i]]=i;
            if(mini != 1000000) ans[i] = mini - i;
        }
        return ans;
    }
};