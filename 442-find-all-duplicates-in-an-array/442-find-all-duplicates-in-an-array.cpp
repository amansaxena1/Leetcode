#define llint long long int
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(llint i=0;i<nums.size();i++){
            // if(nums[i] > 0){
            //     if(nums[nums[i] - 1] < 0) ans.push_back(nums[i]); // nums[nums[i]]=-1*nums[nums[i]];
            //     nums[nums[i]-1] *= (-1);
            // }
            // else{
            //     if(nums[(-1*nums[i]) - 1] < 0) ans.push_back(-1 * nums[i]);
            //     nums[nums[i]-1] *= (-1);
            // }
            if(nums[abs(nums[i] - 0) - 1] < 0) ans.push_back(abs(nums[i] - 0));
            else nums[abs(nums[i] - 0) - 1] *= (-1);
        }
        return ans;
    }
};
// [4,-3,-2,-7,8,2,-3,-1]
