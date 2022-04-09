#define llint long long int
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<llint,llint>mp;
        for(auto i:nums) mp[i]++;
        priority_queue<pair<llint,llint>>pq;
        for(auto i:mp) pq.push({i.second, i.first});
        vector<int>ans;
        while(k--){
            ans.push_back((int)pq.top().second);
            pq.pop();
        }
        return ans;
    }
};