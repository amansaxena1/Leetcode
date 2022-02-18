class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s,ans;
        vector<int>v;
        for(auto i:nums1) s.insert(i);
        
        for(auto i:nums2) if(s.find(i)!=s.end()) ans.insert(i);
        for(auto i:ans) v.push_back(i);
        return v;
    }
};