#define llint long long int
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        llint maxallowed = 0;
        vector<llint>ans;
        for(llint i=0;i<capacity.size();i++) ans.push_back(capacity[i] - rocks[i]);
        sort(ans.begin(), ans.end());
        for(llint i=0;i<ans.size();i++){
            if(ans[i] > additionalRocks) return i;
            else additionalRocks -= ans[i];
        }
        return ans.size();
    }
};