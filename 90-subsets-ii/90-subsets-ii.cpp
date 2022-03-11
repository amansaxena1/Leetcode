class Solution {
public:
    void aman(int ind, vector<int>&curr, vector<int>nums, vector<vector<int>>&ans){
        ans.push_back(curr);
        for(int i=ind;i<nums.size();i++){
            if(i != ind && nums[i] == nums[i-1]) continue;
            curr.push_back(nums[i]);
            aman(i+1,curr,nums,ans);
            curr.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        sort(nums.begin(),nums.end());
        aman(0,curr,nums,ans);
        
        return ans;
    }
};