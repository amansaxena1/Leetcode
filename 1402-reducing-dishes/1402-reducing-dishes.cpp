#define llint int
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        llint ans = 0;
        vector<llint> v(satisfaction.size(), 0);
        for(llint i=satisfaction.size()-1;i>=0;i--) {
            v[i] = satisfaction[i];
            if(i<satisfaction.size()-1) v[i] += v[i+1];
        }
        llint curr = 0;
        for(llint i=satisfaction.size()-1;i>=0;i--){
            curr += v[i];
            ans = max(ans, curr);
        }
        return ans;
    }
};