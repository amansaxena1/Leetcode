class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v(nums.size());
        v[0] = 0;
        for(int i=1;i<nums.size();i++) v[i] = v[i-1] + nums[i-1];
        int ans = 0, ind = 0;
        for(int i=nums.size()-1;i>=0;i--){
            ans += nums[i];
            if(ans > v[i]){
                ind = i;
                break;
            }
        }
        vector<int>u;
        for(int i=nums.size()-1;i>=ind;i--) u.push_back(nums[i]);
        return u;
    }
};