class Solution {
public:
    int helper(int ind, vector<int>& nums, vector<int> &v){
        if(v[ind] != -1) return v[ind];
        
        return v[ind] = max(nums[ind] + helper(ind+2, nums, v), helper(ind+1, nums, v));
    }
    int rob(vector<int>& nums) {
        vector<int>v(nums.size()+2, -1);
        v[v.size()-1] = v[v.size()-2] = 0;
        return helper(0, nums, v);
    }
};