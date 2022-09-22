class Solution {
public:
    void nge(vector<int>& nums, map<int,int>&mp){
        stack<int>st;
        int n = nums.size();
        for(int i = n-1;i>=0;i--){
            while(st.size() && st.top()<nums[i]) st.pop();
            if(st.size()) mp[nums[i]] = st.top();
            else mp[nums[i]] = -1;
            st.push(nums[i]);
        }
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        nge(nums2, mp);
        vector<int>ans;
        for(auto i: nums1) ans.push_back(mp[i]);
        return ans;
    }
};