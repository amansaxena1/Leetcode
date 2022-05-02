#define llint long long int
class Solution {
public:
    
    llint helper(vector<int>& nums){
        llint maxi = INT_MIN;
        llint curr = 0;
        llint n = nums.size();
        for(llint i=0;i<n;i++){
            curr += nums[i];
            maxi = max(maxi, curr);
            if(curr < 0) curr = 0;
        }
        return maxi;
    }
    
    int maxAbsoluteSum(vector<int>& nums) {
        llint ans1 = helper(nums);
        for(llint i=0;i<nums.size();i++) nums[i] *= (-1);
        llint ans2 = helper(nums);
        return max(ans1, ans2);
    }
};