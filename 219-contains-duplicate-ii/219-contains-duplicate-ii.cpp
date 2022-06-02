#define llint long long int
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        map<llint,llint>mp;
        for(llint i=0;i<v.size();i++){
            mp[v[i]]++;
            if(i>k){
                mp[v[i-k-1]]--;
                if(mp[v[i-k-1]] == 0) mp.erase(v[i-k-1]);
                if(mp.size()<=k){
                    return true;
                }
            }
        }
        if(mp.size() <= k && mp.size()<v.size()) return true;
        return false;
    }
};