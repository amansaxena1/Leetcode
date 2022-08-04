class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini = nums[0];
        for(int i=1;i<nums.size();i++) {
            nums[i] += nums[i-1];
            mini = min(mini, nums[i]);
        }
        if(mini < 1) return abs(mini-0)+1;
        return 1;
    }
};