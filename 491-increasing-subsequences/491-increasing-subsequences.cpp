class Solution {
public:
    
    void helper(int ind, vector<int>temp, vector<int>&nums, set<vector<int>>&ans){
        if(ind == nums.size()){
            if(temp.size() > 1) ans.insert(temp);
            return;
        }
        helper(ind+1, temp, nums, ans);
        if(temp.size() == 0 || (temp[temp.size()-1] <= nums[ind])){
            temp.push_back(nums[ind]);
            helper(ind+1, temp, nums, ans);
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>&nums) {
        set<vector<int>>ans;
        vector<int>temp;
        helper(0, temp, nums, ans);
        vector<vector<int>>res;
        for(auto i:ans) res.push_back(i);
        return res;
    }
};