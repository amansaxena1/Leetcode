#define llint long long int
class Solution {
public:
    int arrayPairSum(vector<int>& n) {
        llint ans = 0;
        sort(n.begin(), n.end());
        for(llint i=0;i<n.size();i+=2) ans+=min(n[i], n[i+1]);
        return ans;
    }
};